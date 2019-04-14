///
/// \file VTPCardFlowData.h
///

#ifndef VTPCardFlowData_h
#define VTPCardFlowData_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPCardData.h"
#import "VTPDeviceFlowData.h"
#import "VTPCardEntryMode.h"

@protocol VTPCardFlowData <VTPDeviceFlowData>

@property (retain, nonatomic) VTPCardData *cardData;

@property (nonatomic) VTPCardEntryMode cardEntryMode;

@property (retain, nonatomic) NSString *accountNumber;

@property (retain, nonatomic) NSString *expirationMonth;

@property (retain, nonatomic) NSString *expirationYear;

@property (retain, nonatomic) NSString *serviceCode;

@property (retain, nonatomic) NSString *cardHolderName;

@end

#endif // !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPCardFlowData_h */
