///
/// \file VTPSaleFlowData.h
///

#ifndef VTPSaleFlowData_h
#define VTPSaleFlowData_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlowData.h"
#import "VTPCardFlowData.h"
#import "VTPEmvFlowData.h"
#import "VTPFinancialFlowData.h"
#import "VTPStoreAndForwardFlowData.h"

@interface VTPSaleFlowData : NSObject <VTPFlowData, VTPCardFlowData, VTPEmvFlowData, VTPFinancialFlowData, VTPStoreAndForwardFlowData>

@property (retain, nonatomic) VTPConfiguration *configuration;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPSaleFlowData_h */
