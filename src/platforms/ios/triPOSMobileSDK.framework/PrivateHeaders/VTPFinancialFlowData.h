///
/// \file VTPFinancialFlowData.h
///

#ifndef VTPFinancialFlowData_h
#define VTPFinancialFlowData_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFinancialRequestBase.h"
#import "VTPPaymentType.h"
#import "VTPTransactionStatus.h"
#import "VTPTransactionType.h"
#import "VXP.h"

@protocol VTPFinancialFlowData

@property (retain, nonatomic) NSObject<VTPFinancialRequestBase> *request;

@property (nonatomic) VTPPaymentType paymentType;

@property (nonatomic) VTPTransactionType transactionType;

@property (nonatomic) NSDecimalNumber *totalAmount;

@property (nonatomic) NSDecimalNumber *cashbackAmount;

@property (nonatomic) NSDecimalNumber *tipAmount;

@property (retain, nonatomic) NSString *pinBlock;

@property (retain, nonatomic) NSString *pinKeySerialNumber;

@property (retain, nonatomic) NSString *postalCode;

@property (nonatomic) BOOL processedOnline;

@property (nonatomic) BOOL pinVerfied;

@property (nonatomic) BOOL signatureRequired;

@property (retain, nonatomic) VXPResponse *expressResponse;

@property (nonatomic) VTPTransactionStatus transactionStatus;

@property (retain, nonatomic) NSString *transactionId;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPFinancialFlowData_h */
