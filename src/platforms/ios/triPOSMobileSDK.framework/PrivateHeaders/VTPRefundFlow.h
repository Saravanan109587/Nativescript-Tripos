///
/// \file VTPRefundFlow.h
///

#ifndef VTPRefundFlow_h
#define VTPRefundFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"
#import "VTPCardFlow.h"

@interface VTPRefundFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runCardFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)processCardData:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)getPaymentType:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runConfirmConvenienceAmountFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runTransactionSpecificFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runExpressFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runEmvFinalizeFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)finalize:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)cleanUp;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPRefundFlow_h */
