///
/// \file VTPAuthorizationRequest.h
///

#ifndef VTPAuthorizationRequest_h
#define VTPAuthorizationRequest_h

#import "VTPFinancialRequestBase.h"
#import "VTPFinancialRequestAmounts.h"
#import "VTPFinancialRequestConvenienceFeeAmount.h"
#import "VTPFinancialRequestTipAmount.h"

///
/// \class VTPAuthorizationRequest
///
/// \brief The definition for an authorization request
///
@interface VTPAuthorizationRequest : NSObject <VTPFinancialRequestBase, VTPFinancialRequestAmounts, VTPFinancialRequestConvenienceFeeAmount, VTPFinancialRequestTipAmount>

@end

#endif /* VTPAuthorizationRequest_h */
