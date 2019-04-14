///
/// \file VTPExpressFlow.h
///

#ifndef VTPExpressFlow_h
#define VTPExpressFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"

@interface VTPExpressFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)checkIfExpressIsAvailable:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)makeRequest:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(VXPRequestType)getRequestType;

-(void)setRequestTransaction:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(VXPMarketCode)getMarketCode:(VTPMarketCode)marketCode;

-(void)setRequestTerminal:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(VXPCardHolderPresentCode)getCardHolderPresentCode:(VTPCardHolderPresentCode)cardholderPresentCode;

-(VXPCardPresentCode)getCardPresentCode:(VTPCardHolderPresentCode)cardholderPresentCode marketCode:(VTPMarketCode)marketCode cardData:(VTPCardData *)cardData;

-(VXPCardInputCode)getCardInputCode:(VXPCardPresentCode)cardPresentCode cardData:(VTPCardData *)cardData;

-(VXPTerminalCapabilityCode)getTerminalCapabilityCode:(NSObject<VPDDevice> *)device isEmvAllowed:(BOOL)isEmvAllowed;

-(VXPMotoECICode)getMotoEciCode:(VTPMarketCode)marketCode;

-(VXPTerminalType)getTerminalType:(VTPTerminalType)terminalType;

-(void)setRequestCard:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)setEncryptedIccCardData:(VTPCardData *)cardData;

-(BOOL)setIccCardData:(VTPCardData *)cardData;

-(void)setTransactionEmvData:(VTCTlvCollection)tags;

-(VXPEncryptedEmvFormat)getEncryptedEmvFormat:(VTPEmvDataEncryption)encryption;

-(BOOL)setEncryptedSwipedCardData:(VTPCardData *)cardData;

-(BOOL)setSwipedCardData:(VTPCardData *)cardData;

-(BOOL)setEncryptedKeyedCardData:(VTPCardData *)cardData;

-(void)setKeyedCardData:(VTPCardData *)cardData;

-(VXPCardEncryptedFormat)getCardEncryptedFormat:(VTPCardDataEncryption)encryption;

-(VXPCVVPresenceCode)getTerminalCvvPresenceCode:(VTPSecurityCodeStatus)securityCodeStatus;

-(void)setRequestPin:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)setRequestAddress:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)sendToExpress:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)storeTransactionAfterExpressError;

-(VTPTransactionStatus)getTransactionStatus:(VXPResponse *)expressResponse;

-(BOOL)setPinVerified;

-(void)setStatusUpdates:(BOOL)statusUpdates;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPExpressFlow_h */
