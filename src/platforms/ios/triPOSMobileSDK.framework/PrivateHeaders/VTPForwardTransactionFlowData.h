///
///  \file VTPForwardTransactionFlowData.h
///

#ifndef VTPForwardTransactionFlowData_h
#define VTPForwardTransactionFlowData_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlowData.h"
#import "VTPFinancialFlowData.h"
#import "VTPDatabaseQueryFlowData.h"
#import "VTPCardFlowData.h"

@interface VTPForwardTransactionFlowData : NSObject <VTPFlowData, VTPCardFlowData, VTPFinancialFlowData, VTPDatabaseQueryFlowData, VTPDeviceFlowData>

@property (retain, nonatomic) VTPConfiguration *configuration;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPForwardTransactionFlowData_h */
