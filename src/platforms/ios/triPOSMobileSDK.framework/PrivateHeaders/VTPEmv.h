///
/// \file VTPEmv.h
///

#import <Foundation/Foundation.h>

#ifndef VTPEmv_h
#define VTPEmv_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlowData.h"
#import "VTPCardFlowData.h"
#import "VTPDeviceFlowData.h"
#import "VTPEmvFlowData.h"

@interface VTPEmv : NSObject

+(BOOL)continueWithCardData:(NSObject<VTPFlowData, VTPCardFlowData, VTPEmvFlowData> *)flowData wasIccCardDataRequested:(BOOL)wasIccCardDataRequested;

+(BOOL)isSwipedCardChipCapable:(NSObject<VTPFlowData, VTPCardFlowData, VTPEmvFlowData> *)flowData;

+(BOOL)continueIfChipError:(NSError *)error flowData:(NSObject<VTPFlowData, VTPCardFlowData, VTPEmvFlowData> *)flowData wasIccCardDataRequested:(BOOL)wasIccCardDataRequested;

+(void)promptToUseChipReader:(NSObject<VTPFlowData, VTPDeviceFlowData> *)flowData;

+(void)promptToRemoveCard:(NSObject<VTPFlowData, VTPDeviceFlowData> *)flowData;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPEmv_h */
