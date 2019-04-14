///
/// \file VTPSaleFlow.h
///

#ifndef VTPSaleFlow_h
#define VTPSaleFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"
#import "VTPCardFlow.h"

@interface VTPSaleFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runCardFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)processCardData:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)getPaymentType:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runTipAmountFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runConfirmConvenienceAmountFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runTransactionSpecificFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runExpressFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runEmvFinalizeFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)finalize:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)cleanUp;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPSaleFlow_h */
