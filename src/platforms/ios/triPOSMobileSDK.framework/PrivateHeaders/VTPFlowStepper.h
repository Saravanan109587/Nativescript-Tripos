///
/// \file VTPFlowStepper.h
///

#ifndef VTPFlowStepper_h
#define VTPFlowStepper_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPFlowData.h"
#import "VTPFlowStep.h"

@interface VTPFlowStepper : NSObject

typedef enum _VTPFlowStepperCompletionResult
{
    VTPFlowStepperCompletionResultSuccess,
    VTPFlowStepperCompletionResultSuccessChildFlowEndedFlow,
    VTPFlowStepperCompletionResultFailure
}   VTPFlowStepperCompletionResult;

typedef void (^VTPFlowStepperCompletionHandler)(VTPFlowStepperCompletionResult result);

-(instancetype)initWithFlow:(NSObject<VTPFlow> *)flow parentFlow:(NSObject<VTPFlow> *)parentFlow completionHandler:(VTPFlowStepperCompletionHandler)completionHandler;

+(VTPFlowStepper *)flowStepperWithFlow:(NSObject<VTPFlow> *)flow parentFlow:(NSObject<VTPFlow> *)parentFlow completionHandler:(VTPFlowStepperCompletionHandler)completionHandler;

-(void)runFlowSteps;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPFlowStepper_h */
