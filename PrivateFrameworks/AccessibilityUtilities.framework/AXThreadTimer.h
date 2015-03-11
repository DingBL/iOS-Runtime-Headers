/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AXThreadTimerTask, NSString, NSThread;

@interface AXThreadTimer : NSObject <AXTimer> {
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    id _cancelBlock;
    AXThreadTimerTask *_task;
    NSThread *_thread;
}

@property(getter=isActive,readonly) BOOL active;
@property BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(getter=isCancelled,readonly) BOOL cancelled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(getter=isPending,readonly) BOOL pending;
@property(readonly) Class superclass;
@property(retain) AXThreadTimerTask * task;

- (void)_runAfterDelay:(id)arg1;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2 cancelBlock:(id)arg3;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (void)dealloc;
- (id)initWithThread:(id)arg1;
- (BOOL)isActive;
- (BOOL)isCancelled;
- (BOOL)isPending;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end