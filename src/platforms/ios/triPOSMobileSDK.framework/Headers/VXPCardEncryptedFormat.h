///
/// \file VXPCardEncryptedFormat.h
///

#ifndef VXPCardEncryptedFormat_h
#define VXPCardEncryptedFormat_h

///
/// \enum VXPCardEncryptedFormat
///
typedef enum _VXPCardEncryptedFormat
{
    /// This field is not used
    VXPCardEncryptedFormatNotSet = VXPEnumNotSet,
    /// Default, used for standard EPS encryption devices
    VXPCardEncryptedFormatDefault = 0,
    /// Format 1, used for MagTek devices
    VXPCardEncryptedFormat1,
    /// Format 2, used for Ingenico DPP
    VXPCardEncryptedFormat2,
    /// Format 3 used for Ingenico On-Guard devices
    VXPCardEncryptedFormat3,
    /// Format 4 used for IDTECH devices
    VXPCardEncryptedFormat4,
    /// Format 5 is used for Verifone Mx9xx
    VXPCardEncryptedFormat5,
    /// Format 6 is used for IDTECH SecuRED
    VXPCardEncryptedFormat6,
    /// Format 7 is used for Verifone Vx805 with Mercury XPI
    VXPCardEncryptedFormat7,
}   VXPCardEncryptedFormat;

#endif /* VXPCardEncryptedFormat_h */
