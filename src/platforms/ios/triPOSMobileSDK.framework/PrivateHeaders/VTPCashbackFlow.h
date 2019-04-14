///
/// \file VTPCashbackFlow.h
///

#ifndef VTPCashbackFlow_h
#define VTPCashbackFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"

@interface VTPCashbackFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)getWantCashback:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)shouldPromptForWantCashback;

-(void)getCashbackSelection:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)getCashbackEntry:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPCashbackFlow_h */
