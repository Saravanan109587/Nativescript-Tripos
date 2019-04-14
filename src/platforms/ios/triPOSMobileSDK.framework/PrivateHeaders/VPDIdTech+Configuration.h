///
///  \file VPDIdTech+Configuration.h
///

#ifndef VPDIdTech_Configuration_h
#define VPDIdTech_Configuration_h

#ifdef DEVICE_SUPPORT_IDTECH

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VPDIdTech.h"

@interface VPDIdTech(Configuration)

-(BOOL)configure:(VPDInitializationParameters *)parameters model:(NSString *)model applicationVersion:(NSString *)applicationVersion error:(NSError **)error;

-(NSString *)getConfiguration:(NSString *)groupAndIndex error:(NSError **)error;

-(BOOL)setConfiguration:(NSString *)groupAndIndex value:(NSString *)value error:(NSError **)error;

-(BOOL)setConfiguration:(NSDictionary<NSString *, NSString *> *)configurationItems error:(NSError **)error;

-(NSString *)getVariable:(NSString *)variableId error:(NSError **)error;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* end of DEVICE SUPPORT_IDTECH */

#endif /* VPDIdTech_Configuration_h */
