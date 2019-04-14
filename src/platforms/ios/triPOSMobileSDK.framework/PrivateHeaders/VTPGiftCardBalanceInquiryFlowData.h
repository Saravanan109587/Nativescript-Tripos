///
/// \file VTPGiftCardBalanceInquiryFlowData.h
///

#ifndef VTPGiftCardBalanceInquiryFlowData_h
#define VTPGiftCardBalanceInquiryFlowData_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlowData.h"
#import "VTPCardFlowData.h"
#import "VTPFinancialFlowData.h"

@interface VTPGiftCardBalanceInquiryFlowData : NSObject <VTPFlowData, VTPCardFlowData, VTPFinancialFlowData>

@property (retain, nonatomic) VTPConfiguration *configuration;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTGiftCardBalanceInquiryFlowData_h */
