///
/// \file VTPEncryptedContactlessMagneticStripeCardData.h
///

#ifndef VTPEncryptedContactlessMagneticStripeCardData_h
#define VTPEncryptedContactlessMagneticStripeCardData_h

#import "VTPEncryptedSwipedCardData.h"

///
/// \class VTPEncryptedContactlessMagneticStripeCardData
///
/// \brief The encrypted magnetic stripe card data class
///
/// The encrypted magnetic stripe card data class.
///
@interface VTPEncryptedContactlessMagneticStripeCardData : VTPEncryptedSwipedCardData

#ifndef DOXYGEN_SHOULD_SKIP_THIS

-(instancetype)initWithEncryptedSwipedCardData:(VTPEncryptedSwipedCardData *)encryptedSwipedCardData;

+(VTPEncryptedContactlessMagneticStripeCardData *)encryptedContactlessMagneticStripeCardDataWithEncryptedSwipedCardData:(VTPEncryptedSwipedCardData *)encryptedSwipedCardData;

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

@end

#endif /* VTPEncryptedContactlessMagneticStripeCardData_h */
