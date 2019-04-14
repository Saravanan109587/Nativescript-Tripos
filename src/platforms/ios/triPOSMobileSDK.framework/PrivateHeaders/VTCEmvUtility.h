///
/// \file VTCEmvUtility.h
///

#ifndef VTCEmvUtility_h
#define VTCEmvUtility_h

#import "VTCOfflineProcessingResult.h"
#import "VTCCvmPerformed.h"
#import "VTCTlvUtility.h"
#import "VTPIccCardData.h"
#import "VTCEmvBrand.h"
#import "VTPMarketCode.h"

#ifndef DOXYGEN_SHOULD_SKIP_THIS

@interface VTCEmvUtility : NSObject

+(VTCOfflineProcessingResult)getOfflineProcessingResultFromTags:(VTCTlvCollection)tags;

+(VTCCvmPerformed)getCvmPerformedFromTags:(VTCTlvCollection)tags pinVerifiedOffline:(BOOL *)pinVerifiedOffline;

+(BOOL)isIccCardDebit:(VTPIccCardData *)iccCardData;

+(BOOL)isCommonUsDebitAid:(NSString *)aid;

+(VTCEmvBrand)getBrandForAid:(NSString *)aid;

+(BOOL)isSignatureRequiredForNoCvm:(NSString *)aid marketCode:(VTPMarketCode)marketCode transactionAmount:(NSDecimalNumber *)transactionAmount;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTCEmvUtility_h */
