///
/// \file VTPCardDataEncryption.h
///

#ifndef VTPCardDataEncryption_h
#define VTPCardDataEncryption_h

///
/// \enum VTPCardDataEncryption
///
/// Card data encryption types.
///
typedef enum _VTPCardDataEncryption
{
    /// No encryption
    VTPCardDataEncryptionNone,
    /// Data variant, EPS format
    VTPCardDataEncryptionDataVariantEpsFormat,
    /// PIN variant, EPS format
    VTPCardDataEncryptionPinVariantEpsFormat,
    /// PIN variant, Mercury format
    VTPCardDataEncryptionPinVariantMercuryFormat,
    /// Data variant, Mx9xx format
    VTPCardDataEncryptionDataVariantEpsMxFormat
}   VTPCardDataEncryption;

#endif /* VTPCardDataEncryption_h */
