/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSOperationQueue, NSString, AASigningSession;

@interface AASetupAssistantService : NSObject {
    NSString *_appleID;
    NSString *_emailChoice;
    NSString *_password;
    NSOperationQueue *_requesterQueue;
    AASigningSession *_signingSession;
}

@property(copy) NSString * appleID;
@property(copy) NSString * emailChoice;
@property(copy) NSString * password;

+ (void)resetURLConfiguration;
+ (id)urlConfiguration;

- (id)_signingSession;
- (id)appleID;
- (void)authenticateWithHandler:(id)arg1;
- (void)createAppleIDWithParameters:(id)arg1 handler:(id)arg2;
- (void)dealloc;
- (void)downloadURLConfiguration:(id)arg1;
- (id)emailChoice;
- (id)init;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (id)password;
- (void)setAppleID:(id)arg1;
- (void)setEmailChoice:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setupDelegateAccountsWithParameters:(id)arg1 handler:(id)arg2;
- (void)updateAppleIDWithParameters:(id)arg1 handler:(id)arg2;

@end