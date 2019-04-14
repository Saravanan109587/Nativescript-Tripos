///
/// \file  VTPFlow.h
///

#ifndef VTPFlow_h
#define VTPFlow_h

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#import "VTPError.h"
#import "VTPFlowData.h"
#import "VTPFlowStep.h"

typedef enum _VTPFlowStatus
{
    VTPFlowStatusNone,
    VTPFlowStatusRunning,
    VTPFlowStatusCancelled
}   VTPFlowStatus;

@protocol VTPFlow

@required

@property (retain, nonatomic, readonly) NSString *flowDescription;

@property (retain, nonatomic, readonly) NSArray<VTPFlowStep *> *flowSteps;

@property (copy, nonatomic) VTPErrorHandler errorHandler;

@property (nonatomic) VTPFlowStatus status;

@property (nonatomic) BOOL canFlowBeStopped;

-(instancetype)initWithData:(NSObject<VTPFlowData> *)data;

+(NSObject<VTPFlow> *)flowWithData:(NSObject<VTPFlowData> *)data;

-(void)addChildFlow:(NSObject<VTPFlow> *)flow;

-(void)removeChildFlow:(NSObject<VTPFlow> *)flow;

-(BOOL)stopFlow;

@optional

-(void)cleanUp;

@end

#endif /* !DOXYGEN_SHOULD_SKIP_THIS */

#endif /* VTPFlow_h */
