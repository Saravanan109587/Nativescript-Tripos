///
/// \file VTPGiftCardBalanceInquiryFlow.h
///

#ifndef VTPGiftCardBalanceInquiryFlow_h
#define VTPGiftCardBalanceInquiryFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"
#import "VTPCardFlow.h"

@interface VTPGiftCardBalanceInquiryFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runCardFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)processCardData:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runExpressFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)finalize:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)cleanUp;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPGiftCardBalanceInquiryFlow_h */
