///
/// \file VTPConfirmAmountFlow.h
///

#ifndef VTPConfirmAmountFlow_h
#define VTPConfirmAmountFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"

@interface VTPConfirmAmountFlow : VTPBaseFlow <VTPFlow>

@property (retain, nonatomic) NSString *prompt;

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)getConfirmAmount:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPConfirmAmountFlow_h */
