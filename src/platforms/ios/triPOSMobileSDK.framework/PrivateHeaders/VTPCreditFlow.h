///
/// \file VTPCreditFlow.h
///

#ifndef VTPCreditFlow_h
#define VTPCreditFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"

@interface VTPCreditFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runAddressVerificationFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runConfirmTotalAmountFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)shouldPromptToConfirmTotalAmount;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPCreditFlow_h */
