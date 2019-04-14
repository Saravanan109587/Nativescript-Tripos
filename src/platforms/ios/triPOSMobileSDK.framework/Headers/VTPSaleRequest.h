///
/// \file VTPSaleRequest.h
///

#ifndef VTPSaleRequest_h
#define VTPSaleRequest_h

#import "VTPFinancialRequestBase.h"
#import "VTPFinancialRequestAmounts.h"
#import "VTPFinancialRequestConvenienceFeeAmount.h"
#import "VTPFinancialRequestTipAmount.h"

///
/// \class VTPSaleRequest
///
/// \brief The definition for a sale request
///
@interface VTPSaleRequest : NSObject <VTPFinancialRequestBase, VTPFinancialRequestAmounts, VTPFinancialRequestConvenienceFeeAmount, VTPFinancialRequestTipAmount>

@end

#endif /* VTPSaleRequest_h */
