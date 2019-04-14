///
/// \file VTPTransactionConfiguration.h
///

#ifndef VTPTransactionConfiguration_h
#define VTPTransactionConfiguration_h

#import <Foundation/Foundation.h>

#import "VTPAddressVerificationCondition.h"
#import "VTPCurrencyCode.h"
#import "VTPMarketCode.h"

///
/// \class VTPTransactionConfiguration
///
/// \brief The transaction configuration class.
///
/// This class defines methods and properties for the transaction configuration.
///
@interface VTPTransactionConfiguration : NSObject

///
/// \brief Gets or sets the currency code
///
/// This property gets or sets the currency code.
///
@property (nonatomic) VTPCurrencyCode currencyCode;

///
/// \brief Gets or sets the market code
///
/// This property gets or sets the market code.
///
@property (nonatomic) VTPMarketCode marketCode;

///
/// \brief Gets or sets if partial approvals are allowed
///
/// This property gets or sets if partial approvals are allowed.
///
@property (nonatomic) BOOL arePartialApprovalsAllowed;

///
/// \brief Gets or sets if duplication transactions are allowed
///
/// This property gets or sets if duplication transactions are allowed.
///
@property (nonatomic) BOOL areDuplicateTransactionsAllowed;

///
/// \brief Gets or sets the address verification condition
///
/// This property gets or sets the address verification condition.
///
@property (nonatomic) VTPAddressVerificationCondition addressVerificationCondition;

///
/// \brief Gets or sets if cashback is allowed
///
/// This property gets or sets if cashback is allowed.
///
/// \sa cashbackSelections, isCashbackEntryAllowed
///
@property (nonatomic) BOOL isCashbackAllowed;

///
/// \brief Gets or sets the cashback selections.
///
/// This property gets or sets the cashback selections. It is recommended these values be whole numbers as they are rounded to the nearest whole number before being displayed. If isCashbackAllowed is NO, there is no cashback input and this property is ignored.<br /><br /><strong>NOTE:</strong> The number of cashback selections may vary by POI device.
///
/// \sa isCashbackAllowed, isCashbackEntryAllowed
///
@property (retain, nonatomic) NSArray<NSNumber *> *cashbackSelections;

///
/// \brief Gets or sets if cashback entry is allowed
///
/// This property gets or sets a value that defines behavior dependent on isCashbackAllowed and cashbackSelections. If isCashbackAllowed is NO, there is no cashback input and this property is ignored. If isCashbackAllowed is YES and cashbackSelections contains values, an OTHER option is displayed during cashback selection in which case the number of cashback selections allowed are the number supported by the POI device minus one for the OTHER option. If isCashbackAllowed is YES and cashbackSelections does not contain values, the cardholder is prompted for cashback entry without the selection prompt.
///
/// \sa isCashbackAllowed, cashbackSelections, maximumCashbackEntry, cashbackEntryIncrement
///
@property (nonatomic) BOOL isCashbackEntryAllowed;

///
/// \brief The maximum cashback allowed to be entered.
///
/// This property gets or sets the maximum cashback allowed to be entered.<br /><br /><strong>NOTE:</strong> This property only affects cashback entry and does not limit any values specified in cashbackSelections.
///
/// \sa isCashbackAllowed, isCashbackEntryAllowed, cashbackEntryIncrement
///
@property (nonatomic) NSUInteger maximumCashbackEntry;

///
/// \brief The cashback increment allowed to be entered.
///
/// This property gets or sets the cashback increment allowed to be entered. In other words, during cashback entry, only even multiples of this value are allowed to be entered.<br /><br /><strong>NOTE:</strong> This property only affects cashback entry and does not limit any values specified in cashbackSelections.
///
/// \sa isCashbackAllowed, isCashbackEntryAllowed, maximumCashbackEntry
///
@property (nonatomic) NSUInteger cashbackEntryIncrement;

///
/// \brief Gets or sets if tip is allowed
///
/// This property gets or sets if tip is allowed.
///
/// \sa tipAmounts, tipAmounts, tipPercentages, isTipEntryAllowed
///
@property (nonatomic) BOOL isTipAllowed;

///
/// \brief Gets or sets the tip amounts.
///
/// This property gets or sets the tip amounts. If isTipAllowed is NO, there is no tip input and this property is ignored.<br /><br /><strong>NOTE:</strong> The tip amounts may be rounded to the nearest whole number if the POI device cannot support amounts with decimal digits.<br /><br /><strong>NOTE:</strong> The number of tip selections may vary by POI device.
///
/// \sa tipAmounts, tipPercentages, isTipEntryAllowed
///
@property (retain, nonatomic) NSArray<NSNumber *> *tipAmounts;

///
/// \brief Gets or sets the tip percentages.
///
/// This property gets or sets the tip percentages. If isTipAllowed is NO, there is no tip input and this property is ignored.<br /><br /><strong>NOTE:</strong> This property is ignored if tipAmounts contains values.<br /><br /><strong>NOTE:</strong> The tip selections are calculated based on the total amount and the tip amounts may be rounded to the nearest whole number if the POI device cannot support amounts with decimal digits.<br /><br /><strong>NOTE:</strong> The number of tip selections may vary by POI device.
///
/// \sa isTipAllowed, tipAmounts, isTipEntryAllowed
///
@property (retain, nonatomic) NSArray<NSNumber *> *tipPercentages;

///
/// \brief Gets or sets if tip entry is allowed
///
/// This property gets or sets a value that defines behavior dependent on isTipAllowed and tipAmounts or tipPercentages. If isTipAllowed is NO, there is no tip input and this property is ignored. If isTipAllowed is YES and tipAmounts or tipPercentages contain values, an OTHER option is displayed during tip selection in which case the number of tip selections allowed are the number supported by the POI device minus one for the OTHER option. If isTipAllowed is YES and tipAmounts or tipPercentages do not contain values, the cardholder is prompted for tip entry without the selection prompt.
///
/// \sa isTipAllowed, tipAmounts, tipPercentages
///
@property (nonatomic) BOOL isTipEntryAllowed;


///
/// \brief Gets or sets if debit is allowed
///
/// This property gets or sets if debit is allowed.
///
@property (nonatomic) BOOL isDebitAllowed;

///
/// \brief Gets or sets if EMV is allowed
///
/// This property gets or sets if EMV is allowed.
///
@property (nonatomic) BOOL isEmvAllowed;

///
/// \brief Gets or sets if the security code prompt will occur during keyed card input
///
/// This property gets or sets if the security code prompt will occur during keyed card input.
///
@property (nonatomic) BOOL shouldPromptForKeyedSecurityCode;

///
/// \brief Gets or sets if the amount should be confirmed.
///
/// This property indicates whether or not the card holder is prompted to confirm the amount. This property only applies if the total amount is not modified by the card holder. For example, if the card holder chooses to add a cashback or tip amount, this property is ignored and the card holder is prompted to confirm the total amount.
///
@property (nonatomic) BOOL shouldConfirmAmount;

///
/// \brief Gets or sets if the Gift Card is allowed.
///
/// This property indicates whether or not Gift Cards are a valid form of payment.
///
@property (nonatomic) BOOL isGiftCardAllowed;

///
/// \brief Validates the configuration.
///
/// This method validates the configuration. While some items may have their values verified, others are only checked to ensure they are not nil and/or empty.
///
/// \param error Pointer to NSError object. If the enable fails, error information is returned in this object. This parameter may be nil.
///
/// \return YES if successful, NO otherwise.
///
-(BOOL)validateConfiguration:(NSError **)error;

@end

#endif /* VTPTransactionConfiguration_h */
