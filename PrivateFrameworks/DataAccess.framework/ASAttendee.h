/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSString;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves> {
    NSString *_email;
    NSString *_name;
    NSMutableDictionary *_placeHolder;
}

- (void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2;
- (void)applyPlaceHolder;
- (id)asParseRules;
- (void)clearPlaceHolder;
- (void)dealloc;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalAttendee:(void*)arg1 parentEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 treatNullsAsDeletes:(BOOL)arg3;
- (void)setEmail:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forCCPT:(NSInteger)arg2;

@end