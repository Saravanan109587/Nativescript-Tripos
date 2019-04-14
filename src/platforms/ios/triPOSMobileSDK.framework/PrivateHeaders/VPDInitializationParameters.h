///
/// \file VPDInitializationParameters.h
///

#ifndef VPDInitializationParameters_h
#define VPDInitializationParameters_h

#import <Foundation/Foundation.h>

#import "VTPEmvConfiguration.h"

#ifndef DOXYGEN_SHOULD_SKIP_THIS

@interface VPDInitializationParameters : NSObject

///
/// \brief Gets or sets the idle prompt
///
/// This property is prompt displayed on the device when idle. This value may be nil.
///
@property (retain, nonatomic) NSString *idlePrompt;

///
/// \brief Gets or sets the terminal ID
///
/// This property gets or sets the terminal ID.
///
@property (retain, nonatomic) NSString *terminalId;

///
/// \brief Gets or sets if contactless MSD entry is allowed
///
/// This property gets or sets if contactless magnetic stripe data (MSD) is allowed.
///
@property (nonatomic) BOOL isContactlessMsdEntryAllowed;

///
/// \brief Gets or sets if EMV is supported.
///
/// This property gets or sets if EMV is supported.
///
@property (nonatomic) BOOL isEmvAllowed;

///
/// \brief Gets or sets the EMV configuration
///
/// This property gets or sets the EMV configuration.
///
@property (retain, nonatomic) VTPEmvConfiguration *emvConfiguration;

///
/// \brief Gets or sets the device reboot time hour component
///
/// This property gets or sets the device reboot time hour component. This value should be 0-23.
///
@property (nonatomic) int rebootTimeHour;

///
/// \brief Gets or sets the device reboot time minutes component
///
/// This property gets or sets the device reboot time minutes component. This value should be 0-59.
///
@property (nonatomic) int rebootTimeMinutes;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VPDInitializationParameters_h */
