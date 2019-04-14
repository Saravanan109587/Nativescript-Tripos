///
/// \file VTPGiftCardReloadFlow.h
///

#ifndef VTPGiftCardReloadFlow_h
#define VTPGiftCardReloadFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"
#import "VTPCardFlow.h"

@interface VTPGiftCardReloadFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runCardFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)processCardData:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runExpressFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)finalize:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)cleanUp;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPGiftCardReloadFlow_h */
