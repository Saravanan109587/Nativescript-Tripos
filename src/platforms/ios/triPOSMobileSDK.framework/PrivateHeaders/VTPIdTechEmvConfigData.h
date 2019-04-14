//
//  VTPIdTechEmvConfigData.h
//  triPOSMobileSDK
//

#ifndef VPDIdTech_ConfigData_h
#define VPDIdTech_ConfigData_h

#ifdef DEVICE_SUPPORT_IDTECH

#import <Foundation/Foundation.h>

#import "VPDIdTech.h"

@interface VTPIdTechEmvConfigData : NSObject

@property (nonatomic, retain) NSString *terminalCapabilities; //*

@property (nonatomic, retain) NSString *additionalTerminalCapabilities; //*

@property (nonatomic, retain) NSString *terminalType; //*

@property (nonatomic, retain) NSString *multiLanguage; //*

@property (nonatomic, retain) NSString *defaultDdol;

@property (nonatomic, retain) NSString *forceOnline; //*

@property (nonatomic, retain) NSString *defaultTdol;

@property (nonatomic, retain) NSString *posEntryMode;

@property (nonatomic, retain) NSString *contactTerminalConfiguration; //*

@property (nonatomic, retain) NSString *transactionCurrencyCode; //*

@property (nonatomic, retain) NSString *transactionCurrencyExponent;

@property (nonatomic, retain) NSString *applicationVersionNumber; //*

@property (nonatomic, retain) NSString *merchantCategoryCode; //*

@property (nonatomic, retain) NSString *terminalCountryCode; //*

@property (nonatomic, retain) NSString *terminalFloorLimit;

@property (nonatomic, retain) NSString *transactionReferenceCurrencyCode;

@property (nonatomic, retain) NSString *transactionReferenceCurrencyExponent;

@property (nonatomic, retain) NSString *tacDefault;

@property (nonatomic, retain) NSString *tacDenial;

@property (nonatomic, retain) NSString *tacOnline;

@property (nonatomic, retain) NSString *biasedRandomSelectionThresholdValue; //*

@property (nonatomic, retain) NSString *biasedRandomSelectionTargetPercentage; //*

@property (nonatomic, retain) NSString *biasedRandomSelectionMaxTargetPercentage; //*

@property (nonatomic, retain) NSString *onlineDol;

-(id)initWithRid:(VTPEmvRid *)rid aid:(VTPEmvAid *)aid;

-(NSDictionary *)toDictionary;

@end

#endif /* end of DEVICE SUPPORT_IDTECH */

#endif /* VPDIdTech_ConfigData_h */
