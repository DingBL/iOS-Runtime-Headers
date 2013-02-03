/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, NSArray;

@interface CKMessageStandaloneComposition : CKMessageComposition {
    BOOL _isTextOnly;
    NSString *_markupString;
    NSArray *_messageParts;
    NSArray *_resources;
    NSString *_subject;
    NSString *_textString;
}

@property BOOL isTextOnly;
@property(copy) NSString * markupString;
@property(retain) NSArray * resources;
@property(copy) NSString * subject;
@property(copy) NSString * textString;

- (void)_clearMessageParts;
- (void)dealloc;
- (BOOL)isTextOnly;
- (id)markupString;
- (id)messageParts;
- (id)resources;
- (void)setIsTextOnly:(BOOL)arg1;
- (void)setMarkupString:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTextString:(id)arg1;
- (id)subject;
- (id)textString;

@end