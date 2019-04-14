///
/// \file VTPConfigurationError.h
///

#ifndef VTPConfigurationError_h
#define VTPConfigurationError_h

///
/// \brief The VTP configuration (triPOS Mobile SDK configuration) error domain
///
extern NSString * const VTPConfigurationErrorDomain;

///
/// \brief Block definition for the error handler for device methods.
///
/// \param error The error that occurred.
///
typedef void (^VTPConfigurationErrorHandler)(NSError *error);

///
/// \enum VTPConfigurationErrorCode
///
typedef enum _VTPConfigurationErrorCode
{
    /// Success
    VTPConfigurationErrorCodeSuccess = 0,
    /// Value is nil
    VTPConfigurationErrorCodeValueIsNil,
    /// Value is empty
    VTPConfigurationErrorCodeValueIsEmpty,
    /// Value is invalid
    VTPConfigurationErrorCodeValueIsInvalid,
    /// Unknown
    VTPConfigurationErrorCodeUnknown = INT_MAX
}   VTPConfigurationErrorCode;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

@interface VTPConfigurationError : NSObject

+(NSError *)makeError:(VTPConfigurationErrorCode)code;

+(NSError *)makeErrorWithDescription:(VTPConfigurationErrorCode)code description:(NSString *)description;

@end

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPConfigurationError_h */
