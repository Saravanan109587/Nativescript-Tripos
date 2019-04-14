///
/// \file VTPCardFlow.h
///

#ifndef VTPCardFlow_h
#define VTPCardFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"
#import "VTCFinancialTrack1Data.h"
#import "VTCFinancialTrack2Data.h"

@interface VTPCardFlow : VTPBaseFlow <VTPFlow>

@property (nonatomic) BOOL allowKeyed;

@property (nonatomic) BOOL promptForKeyedSecurityCode;

@property (nonatomic) BOOL allowIcc;

@property (nonatomic) BOOL allowContactless;

@property (nonatomic) NSUInteger maximumRetries;

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)getCardData:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)handleCardData:(VTPCardData *)cardData flowStepCompletionHandler:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)handleCardDataError:(NSError *)error flowStepCompletionHandler:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)wasCardDataCancelledByUser:(NSError *)error flowStepCompletionHandler:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)processCardData:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(BOOL)tryCardDataAsIccCardData;

-(void)setCommonIccCardData:(VTPIccCardData *)cardData;

-(BOOL)tryCardDataAsEncryptedSwipedCardData;

-(BOOL)tryCardDataAsSwipedCardData;

-(void)setPropertiesFromFinancialTrackData:(NSObject<VTCFinancialTrackData> *)financialTrackData;

-(BOOL)tryCardDataAsEncryptedKeyedCardData;

-(BOOL)tryCardDataAsKeyedCardData;

-(BOOL)validateExpirationDate:(NSString *)expirationDate;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPCardFlow_h */
