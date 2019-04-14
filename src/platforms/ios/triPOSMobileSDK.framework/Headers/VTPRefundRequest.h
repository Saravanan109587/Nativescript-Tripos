///
/// \file VTPRefundRequest.h
///

#ifndef VTPRefundRequest_h
#define VTPRefundRequest_h

#import "VTPFinancialRequestBase.h"
#import "VTPFinancialRequestAmounts.h"
#import "VTPFinancialRequestConvenienceFeeAmount.h"

///
/// \class VTPRefundRequest
///
/// \brief The definition for a refund request
///
@interface VTPRefundRequest : NSObject <VTPFinancialRequestBase, VTPFinancialRequestAmounts, VTPFinancialRequestConvenienceFeeAmount>

@end

#endif /* VTPRefundRequest_h */
