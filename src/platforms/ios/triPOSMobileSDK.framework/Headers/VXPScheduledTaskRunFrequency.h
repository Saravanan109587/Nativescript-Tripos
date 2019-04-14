///
/// \file VXPScheduledTaskRunFrequency.h
///

#ifndef VXPScheduledTaskRunFrequency_h
#define VXPScheduledTaskRunFrequency_h

///
/// \enum VXPScheduledTaskRunFrequency
///
typedef enum _VXPScheduledTaskRunFrequency
{
    /// This field is not used
    VXPRunFrequencyNotSet = VXPEnumNotSet,
    /// Null
    VXPRunFrequencyNull = -1,
    /// One time future
    VXPRunFrequencyOneTimeFuture,
    /// Daily
    VXPRunFrequencyDaily,
    /// Weekly
    VXPRunFrequencyWeekly,
    /// Bi-weekly
    VXPRunFrequencyBiWeekly,
    /// Monthly
    VXPRunFrequencyMonthly,
    /// Bi-monthly
    VXPRunFrequencyBiMonthly,
    /// Quarterly
    VXPRunFrequencyQuarterly,
    /// Semiannually
    VXPRunFrequencySemiAnnually,
    /// Yearly
    VXPRunFrequencyYearly,
}   VXPScheduledTaskRunFrequency;


#endif /* VXPScheduledTaskRunFrequency_h */
