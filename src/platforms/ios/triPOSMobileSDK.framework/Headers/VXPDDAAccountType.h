///
/// \file VXPDDAAccountType.h
///

#ifndef VXPDDAAccountType_h
#define VXPDDAAccountType_h

///
/// \enum VXPDDAAccountType
///
typedef enum _VXPDDAAccountType
{
    /// This field is not used
    VXPDDAAccountTypeNotSet = VXPEnumNotSet,
    /// Checking account
    VXPDDAAccountTypeChecking = 0,
    /// Savings account
    VXPDDAAccountTypeSavings,
}   VXPDDAAccountType;

#endif /* VXPDDAAccountType_h */
