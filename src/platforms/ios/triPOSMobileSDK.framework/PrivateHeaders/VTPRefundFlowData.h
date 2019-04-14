///
/// \file VTPRefundFlowData.h
///

#ifndef VTPRefundFlowData_h
#define VTPRefundFlowData_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlowData.h"
#import "VTPCardFlowData.h"
#import "VTPEmvFlowData.h"
#import "VTPFinancialFlowData.h"
#import "VTPStoreAndForwardFlowData.h"

@interface VTPRefundFlowData : NSObject <VTPFlowData, VTPCardFlowData, VTPEmvFlowData, VTPFinancialFlowData, VTPStoreAndForwardFlowData>

@property (retain, nonatomic) VTPConfiguration *configuration;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPRefundFlowData_h */
