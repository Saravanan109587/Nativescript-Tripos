///
/// \file VXPLodgingPrestigiousPropertyCode.h
///

#ifndef VXPLodgingPrestigiousPropertyCode_h
#define VXPLodgingPrestigiousPropertyCode_h

///
/// \enum VXPLodgingPrestigiousPropertyCode
///
typedef enum _VXPLodgingPrestigiousPropertyCode
{
    /// This field is not used
    VXPLodgingPrestigiousPropertyCodeNotSet = VXPEnumNotSet,
    /// Non-participant
    VXPLodgingPrestigiousPropertyCodeNonParticipant = 0,
    /// $500 limit
    VXPLodgingPrestigiousPropertyCodeDollarLimit500,
    /// $1000 limit
    VXPLodgingPrestigiousPropertyCodeDollarLimit1000,
    /// $1500 limit
    VXPLodgingPrestigiousPropertyCodeDollarLimit1500,
}   VXPLodgingPrestigiousPropertyCode;

#endif /* VXPLodgingPrestigiousPropertyCode_h */
