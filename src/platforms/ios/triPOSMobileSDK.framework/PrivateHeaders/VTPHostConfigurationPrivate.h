///
/// \file VTPHostConfigurationPrivate.h
///

#ifndef VTPHostConfigurationPrivate_h
#define VTPHostConfigurationPrivate_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

// forward reference because public headers cannot be included in private headers???
@class VTPHostConfiguration;

@interface VTPHostConfiguration(private)

@property (retain, nonatomic) NSURL *expressUrl;

@property (retain, nonatomic) NSString *certificationLogIpAddress;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPHostConfigurationPrivate_h */
