///
/// \file VTPFlowStep.h
///

#ifndef VTPFlowStep_h
#define VTPFlowStep_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

@interface VTPFlowStep : NSObject

typedef enum _VTPFlowStepCompletionResult
{
    VTPFlowStepCompletionResultSuccess,
    VTPFlowStepCompletionResultSuccessEndFlow,
    VTPFlowStepCompletionResultSuccessEndFlowAndAllParentFlows,
    VTPFlowStepCompletionResultFailure
}   VTPFlowStepCompletionResult;

typedef void (^VTPFlowStepCompletionHandler)(VTPFlowStepCompletionResult result);

@property (retain, nonatomic) NSString *stepDescription;
    
@property (retain, nonatomic) NSString *stepSelector;

+(VTPFlowStep *)flowStepWithDescription:(NSString *)description selector:(NSString *)selector;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPFlowStep_h */
