//
//  \file VPDIdTech.h
//
#ifndef VPDIdTech_h
#define VPDIdTech_h

#ifdef DEVICE_SUPPORT_IDTECH

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VPDDevicePrivate.h"

#import <IDTech/IDTech.h>

@interface VPDIdTech : VPDDevicePrivate <VPDDevicePrivate>

///
/// \brief Checks if the device is connected and calls the error handler if not
///
/// This method checks of the device is connected and calls the handler if not.
///
/// \return YES if not connected, NO otherwise.
///
-(BOOL)errorIfNotConnected:(VPDErrorHandler)errorHandler;

///
/// \brief Checks if the device is initialized and calls the error handler if not
///
/// This method checks of the device is initialized and calls the handler if not.
///
/// \return YES if not initialized, NO otherwise.
///
-(BOOL)errorIfNotInitialized:(VPDErrorHandler)errorHandler;

typedef void (^VPDIdTechMessageHandler)(IDTEMVData *emvData);

@property (copy, nonatomic) VPDIdTechMessageHandler messageHandler;

typedef enum _VPDIdTechWhatIsEnabled
{
    VPDIdTechWhatIsEnabledNothing,
    VPDIdTechWhatIsEnabledCardInput,
}   VPDIdTechWhatIsEnabled;

@property (nonatomic) VPDIdTechWhatIsEnabled whatIsEnabled;

-(void)setUserInputTimer:(VPDErrorHandler)errorHandler;

-(void)setNonUserInputTimer:(VPDErrorHandler)errorHandler;

-(void)startInputTimer;

-(void)stopInputTimer;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* end of DEVICE SUPPORT_IDTECH */

#endif /* VPDIdTech_h */
