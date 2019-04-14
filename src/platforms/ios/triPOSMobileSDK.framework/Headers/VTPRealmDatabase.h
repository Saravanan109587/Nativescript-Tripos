///
///  \file VTPRealmDatabase.h
///

#ifndef VTPRealmDatabase_h
#define VTPRealmDatabase_h

#import "VTPStoreDatabase.h"

@interface VTPRealmDatabase : NSObject <VTPStoreDatabase>

@property NSString *name;

@end

#endif /* VTPRealmDatabase_h */
