///
/// \file VTPGiftCardReloadFlowData.h
///

#ifndef VTPGiftCardReloadFlowData_h
#define VTPGiftCardReloadFlowData_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlowData.h"
#import "VTPCardFlowData.h"
#import "VTPFinancialFlowData.h"

@interface VTPGiftCardReloadFlowData : NSObject <VTPFlowData, VTPCardFlowData, VTPFinancialFlowData>

@property (retain, nonatomic) VTPConfiguration *configuration;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTGiftCardReloadFlowData_h */
