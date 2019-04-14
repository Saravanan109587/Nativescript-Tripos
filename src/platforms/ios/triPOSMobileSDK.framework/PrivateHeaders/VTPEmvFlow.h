///
/// \file VTPEmvFlow.h
///

#ifndef VTPEmvFlow_h
#define VTPEmvFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"
#import "VTCCvmPerformed.h"

@interface VTPEmvFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)runCashbackFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)isEmvCashbackAllowed;

-(void)updateRequiredEmvCashbackTags:(VTPIccCardData *)iccCardData;

-(BOOL)doesApplicationUsuageControlAllowCashback:(VTPIccCardData *)iccCardData;

-(BOOL)doesApplicationApplicationUsuageControlAllowCashbackForCountryCodes:(VTPIccCardData *)iccCardData applicationUsuageControl:(NSData *)applicationUsuageControl;

-(void)runConfirmTotalAmountFlow:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)shouldPromptToConfirmTotalAmount;

-(void)preHostProcessing:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)handlePreHostProcessing:(VTCTlvCollection)tags pinBlock:(NSString *)pinBlock keySerialNumber:(NSString *)keySerialNumber flowStepCompletionHandler:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)doesTransactionTypeRequirePreHostProcessing;

-(BOOL)doesTransactionTypeRequireOnlineProcessing;

-(NSMutableArray<NSNumber *> *)getPreHostProcessingRequiredTagsList;

-(BOOL)getRequiredEmvTags:(NSMutableArray<NSNumber *> *)tags;

-(void)mergeTagsWithCardDataTags:(VTCTlvCollection)tags;

-(void)checkIfDebitShouldBeConvertedToDebit:(VTCCvmPerformed)cvmPerformed;

-(void)queueForce:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPEmvFlow_h */
