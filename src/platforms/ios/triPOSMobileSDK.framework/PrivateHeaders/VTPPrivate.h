///
/// \file VTPPrivate.h
///

#ifndef VTPPrivate_h
#define VTPPrivate_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTP.h"
#import "VTPConfiguration.h"
#import "VTPFlow.h"
#import "VTPStatus.h"
#import "VTPStoreDatabase.h"

@interface VTP()

@property (retain, nonatomic) NSObject<VTPFlow> *runningFlow;

@property (retain, nonatomic) NSObject<VTPStoreDatabase> *storeDatabase;

-(void)sendStatusChange:(VTPStatus)status;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPPrivate_h */
