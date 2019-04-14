///
/// \file VTPDebitFlow.h
///

#ifndef VTPDebitFlow_h
#define VTPDebitFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"

@interface VTPDebitFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runCashbackFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runConfirmTotalAmountFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)shouldPromptToConfirmTotalAmount;

-(void)getPin:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPDebitFlow_h */
