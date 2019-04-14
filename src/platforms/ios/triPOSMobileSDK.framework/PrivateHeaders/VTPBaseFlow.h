///
/// \file VTPBaseFlow.h
///

#ifndef VTPBaseFlow_h
#define VTPBaseFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPError.h"
#import "VTPFlowData.h"
#import "VTPFlowStepper.h"
#import "VTPPaymentType.h"
#import "VTPCardFlowData.h"

@interface VTPBaseFlow : NSObject <VTPFlow>

@property (nonatomic) VTPFlowStatus status;

@property (nonatomic) BOOL canFlowBeStopped;

@property (copy, nonatomic) VTPErrorHandler errorHandler;

-(void)returnError:(VTPErrorCode)code description:(NSString *)description;

-(void)returnError:(NSError *)error;

-(void)handleStepError:(VTPErrorCode)code description:(NSString *)description flowStepCompletionHandler:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)handleStepError:(NSError *)error flowStepCompletionHandler:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(VTPFlowStepCompletionResult)getFlowStepResultFromFlowStepperResult:(VTPFlowStepperCompletionResult)flowStepperResult;

-(BOOL)stopFlow;

-(BOOL)shouldPaymentTypeBeCreditBecauseExpressIsOffline;

-(VTPPaymentType)checkPaymentTypeForIccCard;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPBaseFlow_h */
