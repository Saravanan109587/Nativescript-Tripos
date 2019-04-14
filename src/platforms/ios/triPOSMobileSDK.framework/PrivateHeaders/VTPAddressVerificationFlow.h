///
/// \file VTPAddressVerificationFlow.h
///

#ifndef VTPAddressVerificationFlow_h
#define VTPAddressVerificationFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPFlow.h"
#import "VTPBaseFlow.h"

@interface VTPAddressVerificationFlow : VTPBaseFlow <VTPFlow>

-(void)checkPrerequisites:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

-(void)getPostalCodeEntry:(VTPFlowStepCompletionHandler)flowStepCompletionHandler;

@end


#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPAddressVerificationFlow_h */
