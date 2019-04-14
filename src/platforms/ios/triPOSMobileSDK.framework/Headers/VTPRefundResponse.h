///
/// \file VTPRefundResponse.h
///

#ifndef VTPRefundResponse_h
#define VTPRefundResponse_h

#import "VTPFinancialResponseBase.h"
#import "VTPFinancialResponseAmounts.h"
#import "VTPFinancialResponseCard.h"
#import "VTPFinancialResponseCardVerification.h"
#import "VTPFinancialResponseEmv.h"
#import "VTPFinancialResponseHost.h"
#import "VTPStoreAndForwardResponse.h"

///
/// \class VTPRefundResponse
///
/// \brief The definition of the refund response
///
@interface VTPRefundResponse : NSObject <VTPFinancialResponseBase, VTPFinancialResponseCard, VTPFinancialResponseCardVerification, VTPFinancialResponseEmv, VTPFinancialResponseHost, VTPStoreAndForwardResponse>

@end

#endif /* VTPRefundResponse_h */
