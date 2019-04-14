///
/// \file VTPEmvFinalizeFlow.h
///

#ifndef VTPEmvFinalizeFlow_h
#define VTPEmvFinalizeFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"
#import "VTCOfflineProcessingResult.h"

@interface VTPEmvFinalizeFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)postHostProcessing:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)doesTransactionTypeRequirePostHostProcessing;

-(VTCTlvCollection)getPostHostProcessingTagsForPinPad:(VTCTlvCollection)tags;

-(void)handlePostHostProcessing:(VTCTlvCollection)finalizeTags flowStepCompletionHandler:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)handleFinializeError:(NSError *)error flowStepCompletionHandler:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(VTCTlvCollection)getTagsFromHostResponse:(VXPResponse *)hostResponse;

-(void)mergeTagsWithCardDataTags:(VTCTlvCollection)tags;

-(void)deleteEmvTransactionIfStored;

-(void)updateEmvTransactionIfStored;

-(void)queueForce:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)queueReversal:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPEmvFinalizeFlow_h */
