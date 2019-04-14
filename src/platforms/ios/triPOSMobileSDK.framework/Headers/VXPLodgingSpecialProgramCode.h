///
/// \file VXPLodgingSpecialProgramCode.h
///

#ifndef VXPLodgingSpecialProgramCode_h
#define VXPLodgingSpecialProgramCode_h

///
/// \enum VXPLodgingSpecialProgramCode
///
typedef enum _VXPLodgingSpecialProgramCode
{
    /// This field is not used
    VXPLodgingSpecialProgramCodeNotSet = VXPEnumNotSet,
    /// Sale
    VXPLodgingSpecialProgramCodeSale = 0,
    /// No-show
    VXPLodgingSpecialProgramCodeNoShow,
    /// Advance deposit
    VXPLodgingSpecialProgramCodeAdvanceDeposit,
}   VXPLodgingSpecialProgramCode;

#endif /* VXPLodgingSpecialProgramCode_h */
