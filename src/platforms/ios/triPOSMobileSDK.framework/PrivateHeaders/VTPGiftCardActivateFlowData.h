///
/// \file VTPGiftCardActivateFlowData.h
///

#ifndef VTPGiftCardActivateFlowData_h
#define VTPGiftCardActivateFlowData_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlowData.h"
#import "VTPCardFlowData.h"
#import "VTPFinancialFlowData.h"

@interface VTPGiftCardActivateFlowData : NSObject <VTPFlowData, VTPCardFlowData, VTPFinancialFlowData>

@property (retain, nonatomic) VTPConfiguration *configuration;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTGiftCardActivateFlowData_h */
