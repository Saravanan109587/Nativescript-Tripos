///
///  \file VTPDatabaseQueryFlowData.h
///

#ifndef VTPDatabaseQueryFlowData_h
#define VTPDatabaseQueryFlowData_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPStoreAndForwardFlowData.h"
#import "VTPStoreTransactionState.h"

@protocol VTPDatabaseQueryFlowData <VTPStoreAndForwardFlowData>

@property (nonatomic) VTPStoreTransactionState state;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPDatabaseQueryFlowData_h */
