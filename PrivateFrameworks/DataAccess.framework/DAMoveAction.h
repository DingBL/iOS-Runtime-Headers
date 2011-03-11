/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMoveAction : DAAction  {
    NSString *_oldContainerId;
    NSString *_oldServerId;
    NSString *_newContainerId;
}

@property(readonly) NSString * newContainerId;
@property(readonly) NSString * oldServerId;
@property(readonly) NSString * oldContainerId;


- (id)initWithAction:(int)arg1 context:(id)arg2 oldContainerId:(id)arg3 oldServerId:(id)arg4 newContainerId:(id)arg5;
- (id)newContainerId;
- (id)oldServerId;
- (id)oldContainerId;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end