///
/// \file VXPScheduledTaskStatus.h
///

#ifndef VXPScheduledTaskStatus_h
#define VXPScheduledTaskStatus_h

///
/// \enum VXPScheduledTaskStatus
///
typedef enum _VXPScheduledTaskStatus
{
    /// This field is not used
    VXPScheduledTaskStatusNotSet = VXPEnumNotSet,
    /// Null
    VXPScheduledTaskStatusNull = -1,
    /// Active
    VXPScheduledTaskStatusActive,
    /// Disabled
    VXPScheduledTaskStatusDisabled,
    /// Removed
    VXPScheduledTaskStatusRemoved,
}   VXPScheduledTaskStatus;

#endif /* VXPScheduledTaskStatus_h */
