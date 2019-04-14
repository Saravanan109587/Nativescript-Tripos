///
/// \file VTPError.h
///

#ifndef VTPError_h
#define VTPError_h

///
/// \brief The VTP (triPOS Mobile SDK) error domain.
///
extern NSString * const VTPErrorDomain;

///
/// \brief Block definition for the error handler for device methods.
///
/// \param error The error that occurred.
///
typedef void (^VTPErrorHandler)(NSError *error);

typedef enum _VTPErrorCode
{
    /// Success
    VTPErrorCodeSuccess,
    
    /// Parameter is nil
    VTPErrorCodeParameterIsNil,
    /// Parameter is invalid
    VTPErrorCodeParameterIsInvalid,
    /// Configuration is invalid
    VTPErrorCodeConfigurationIsInvalid,
    
    /// Device setup failed
    VTPErrorCodeDeviceSetupFailed,
    /// Device is not connected
    VTPErrorCodeDeviceNotConnected,
    /// Device is not initialized
    VTPErrorCodeDeviceNotInitialized,
    /// Device does not support card input
    VTPErrorCodeDeviceDoesNotSupportCardInput,
    /// Device does not support PIN input
    VTPErrorCodeDeviceDoesNotSupportPinInput,
    /// Device does not support EMV
    VTPErrorCodeDeviceDoesNotSupportEmv,
    
    /// Unknown flow stepper error
    VTPErrorCodeFlowStepperUnknowError,
    /// Flow stepper terminated early
    VTPErrorCodeFlowStepperTerminatedEarly,
    
    /// Card input unknown error
    VTPErrorCodeCardInputUnknown,
    /// Card input type not accepted
    VTPErrorCodeCardInputTypeNotAccepted,
    
    /// Invalid payment type
    VTPErrorCodeInvalidPaymentType,
    
    /// User did not confirm amount
    VTPErrorCodeUserDidNotConfirmAmount,
    
    /// Swiped card is chip capable
    VTPErrorCodeSwipedCardIsChipCapable,
    
    /// Transaction was approved offline by the card, but the SDK could not complete the force. Typically associated with a GENAC1 approval.
    VTPErrorTransactionApprovedOfflineButCouldNotBeCompleted,
    
    /// Database was nil or not open
    VTPErrorCodeDatabaseNotOpen,
    
    /// Query for a stored transaction was not found
    VTPErrorCodeTransactionNotFound,
    
    /// Something went wrong and the database returned an error
    VTPErrorCodeDatabaseError,
    
    /// Express is not available
    VTPErrorCodeExpressIsNotAvailable,
    
    VTPErrorCodeUnknown = INT_MAX
}   VTPErrorCode;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

@interface VTPError : NSObject

+(NSError *)makeError:(VTPErrorCode)code;

+(NSError *)makeErrorWithDescription:(VTPErrorCode)code description:(NSString *)description;

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

@end

#endif /* VTPError_h */
