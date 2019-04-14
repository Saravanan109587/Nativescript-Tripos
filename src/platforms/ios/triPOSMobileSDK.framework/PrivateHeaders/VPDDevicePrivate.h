///
/// VPDDevicePrivate.h
///

#ifndef VPDDevicePrivate_h
#define VPDDevicePrivate_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VPDDevice.h"
#import "VPDInitializationParameters.h"
#import "VPDError.h"
#import "VPDType.h"

extern const NSTimeInterval VPDUserInputTimeout;

extern const NSTimeInterval VPDNonUserInputTimeout;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
//
// forward delcaration to avoid circular include files
//
@protocol VPDDelegate;
#endif

///
/// \protocol VPDDevicePrivate
/// \brief Device protocol
///
/// The VPDDevicePrivate protocol defines methods a POI must implement.
///
@protocol VPDDevicePrivate <VPDDevice>

@required

///
/// \brief Inidicates if the device implements the type.
///
/// Indicates if the device implements the type.
///
/// \param The type.
///
/// \return YES if the type is implemented, NO otherwise.
+(BOOL)doesImplementType:(NSNumber *)vsdType;

///
/// \brief Creates and returns a device of the given type.
///
/// Creates and returns a device of the given type.
///
/// \param The type.
///
/// \return An initialized device if the type is supported, otherwise nil.
///
+(NSObject<VPDDevice> *)deviceWithType:(NSNumber *)vpdType;

///
/// \brief Initialize the device.
///
/// Initializes the device with the provided parameters.
///
/// \param parameters The initialization parameters.
///
/// \param error Pointer to NSError object. If the enable fails, error information is returned in this object. This parameter may be nil.
///
/// \return YES if successful, NO otherwise.
///
-(BOOL)initializeWithParameters:(VPDInitializationParameters *)parameters error:(NSError **)error;

///
/// \brief Perform a quick initialization of the device.
///
/// Initializes the device with the provided parameters. This initialization differs from the full initialization in that it only attemps to initialize parameters that are volatile and may have been lost during a reboot.
///
/// \param parameters The initialization parameters.
///
/// \param error Pointer to NSError object. If the enable fails, error information is returned in this object. This parameter may be nil.
///
/// \return YES if successful, NO otherwise.
///
-(BOOL)quickInitializeWithParameters:(VPDInitializationParameters *)parameters error:(NSError **)error;

///
/// \brief Start device connection
///
/// Starts the device connection process. This process automatically detects when devices are connected and disconnected.
///
-(BOOL)startConnection:(NSError **)error;

///
/// \brief Stop device connection
///
/// Stops the device connection process and terminates all device activity.
///
-(BOOL)stopConnection:(NSError **)error;

@optional

///
/// \brief Start device connection
///
/// Starts the device connection process. This process automatically detects when devices are connected and disconnected.
///
-(BOOL)startTcpIpConnection:(NSString *)ipAddress port:(NSUInteger)port error:(NSError **)error;

@end

@interface VPDDevicePrivate : NSObject

///
/// \brief Adds a receiver to the list of delegates
///
/// This method adds a receiver to the list of delegates. There may be multiple receivers for each protocol selector.
///
/// \param delegate The receiver's delegate.
///
-(void)addDelegate:(id<VPDDelegate>)delegate;

///
/// \brief Removes a receiver from the list of delegates
///
/// This method removes a receiver from the list of delegates.
///
/// \param delegate The receiver's delegate. This must be the same reference previously added.
///
-(void)removeDelegate:(id <VPDDelegate>)delegate;

///
/// \brief Sends a device connection notification to all registered delegates
///
/// This method sends a device connection notification to all registered delegates.
///
/// \param description The description of the connected device.
///
/// \param model The model of the connected device.

/// \param serialNumber The serial number of the connected device.
///
-(void)sendDeviceDidConnectToDelegates:(NSString *)description model:(NSString *)model serialNumber:(NSString *)serialNumber;

///
/// \brief Sends a device disconnection notification to all registered delegates
///
/// This method sends a device disconnection notification to all registered delegates.
///
-(void)sendDeviceDidDisconnectToDelegates;

///
/// \brief Sends a device error notification to all registered delegates
///
/// This method sends a device error notification to all registered delegates.
///
/// \param error The error.
///
-(void)sendDeviceDidErrorToDelegates:(NSError *)error;

///
/// \brief Get the current device as a beep device
///
/// This method attempts to get the current beep as a display device.
///
/// \return An VPDBeepDevice object if the device supports choice input, otherwise nil.
///
-(VPDBeepDevice)getAsBeepDevice;

///
/// \brief Get the current device as a card input device
///
/// This method attempts to get the current device as a card input device.
///
/// \return An VPDCardInputDevice object if the device supports card input, otherwise nil.
///
-(NSObject<VPDCardInput> *)getAsCardInputDevice;

///
/// \brief Get the current device as a choice input device
///
/// This method attempts to get the current device as a choice input device.
///
/// \return An VPDChoiceInputDevice object if the device supports choice input, otherwise nil.
///
-(NSObject<VPDChoiceInput> *)getAsChoiceInputDevice;

///
/// \brief Get the current device as a display device
///
/// This method attempts to get the current device as a display device.
///
/// \return An VPDDisplayDevice object if the device supports choice input, otherwise nil.
///
-(NSObject<VPDDisplay> *)getAsDisplayDevice;

///
/// \brief Get the current device as an EMV device
///
/// This method attempts to get the current device as an EMV device.
///
/// \return An VPDDisplayDevice object if the device supports EMV, otherwise nil.
///
-(NSObject<VPDEmv> *)getAsEmvDevice;

///
/// \brief Get the current device as a keyboard numeric input device
///
/// This method attempts to get the current device as a keyboard numeric input device.
///
/// \return An VPDKeyboardNumericInputDevice object if the device supports keyboard numeric input, otherwise nil.
///
-(NSObject<VPDKeyboardNumericInput> *)getAsKeyboardNumericInputDevice;

///
/// \brief Get the current device as a PIN input device
///
/// This method attempts to get the current device as a PIN input device.
///
/// \return An VPDPinInputDevice object if the device supports PIN input, otherwise nil.
///
-(NSObject<VPDPinInput> *)getAsPinInputDevice;

///
/// \brief Get the current device as a yes/no input device
///
/// This method attempts to get the current device as a yes/no input device.
///
/// \return An VPDYesNoInputDevice object if the device supports yes/no input, otherwise nil.
///
-(NSObject<VPDYesNoInput> *)getAsYesNoInputDevice;

///
/// \brief Get the current device as a barcode input device
///
/// This method attempts to get the current device as a barcode input device.
///
/// \return A VPDBarcodeInputDevice object if the device supports barcode input, otherwise nil.
///
-(NSObject<VPDBarcodeInput> *)getAsBarcodeInputDevice;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VPDDevicePrivate_h */
