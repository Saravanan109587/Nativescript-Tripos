///
/// \file VTPGiftCardReloadResponse.h
///

#ifndef VTPGiftCardReloadResponse_h
#define VTPGiftCardReloadResponse_h

#import "VTPFinancialResponseBase.h"
#import "VTPFinancialResponseAmounts.h"
#import "VTPFinancialResponseCard.h"
#import "VTPFinancialResponseHost.h"

///
/// \class VTPGiftCardReloadResponse
///
/// \brief The definition of the sale response
///
@interface VTPGiftCardReloadResponse : NSObject <VTPFinancialResponseBase, VTPFinancialResponseAmounts, VTPFinancialResponseCard, VTPFinancialResponseHost>

@end

#endif /* VTPGiftCardReloadResponse_h */
