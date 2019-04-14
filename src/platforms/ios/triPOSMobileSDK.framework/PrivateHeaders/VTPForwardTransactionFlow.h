///
///  \file VTPForwardTransactionFlow.h
///

#ifndef VTPForwardTransactionFlow_h
#define VTPForwardTransactionFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"

@interface VTPForwardTransactionFlow : VTPBaseFlow <VTPFlow>

-(void)setupTransaction:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)saveResultsToDatabase:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPForwardTransactionFlow_h */
