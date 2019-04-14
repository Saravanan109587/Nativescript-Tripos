///
/// \file VPDIngenicoRba+Configuration.h
///

#ifndef VPDIngenicoRba_Configuration_h
#define VPDIngenicoRba_Configuration_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VPDIngenicoRba.h"

@interface VPDIngenicoRba(Configuration)

-(BOOL)configure:(VPDInitializationParameters *)parameters model:(NSString *)model applicationVersion:(NSString *)applicationVersion error:(NSError **)error;

-(NSString *)getConfiguration:(NSString *)groupAndIndex error:(NSError **)error;

-(BOOL)setConfiguration:(NSString *)groupAndIndex value:(NSString *)value error:(NSError **)error;

-(BOOL)setConfiguration:(NSDictionary<NSString *, NSString *> *)configurationItems error:(NSError **)error;

-(NSString *)getVariable:(NSString *)variableId error:(NSError **)error;

-(void)enableNotifications:(BOOL)enable;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VPDIngenicoRba_Configuration_h */
