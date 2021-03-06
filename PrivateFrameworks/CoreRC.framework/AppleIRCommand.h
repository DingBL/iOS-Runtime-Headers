/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface AppleIRCommand : IRCommand

@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly) unsigned char commandID;
@property (nonatomic, readonly) unsigned char commandPage;
@property (nonatomic, readonly) unsigned char deviceUID;
@property (nonatomic, readonly) BOOL isA39PlayPauseSelect;
@property (nonatomic, readonly) BOOL isB39Command;
@property (nonatomic, readonly) BOOL isB39PlayPauseOrSelect;
@property (nonatomic, readonly) BOOL isPairingRequest;
@property (nonatomic, readonly) BOOL isStackshotRequest;
@property (nonatomic, readonly) BOOL isUnpairingRequest;
@property (nonatomic, readonly) unsigned short token;
@property (nonatomic, readonly) unsigned short vendorID;

+ (BOOL)matchNECVendorID:(unsigned short)arg1;

- (unsigned int)command;
- (unsigned char)commandID;
- (unsigned char)commandPage;
- (id)description;
- (unsigned char)deviceUID;
- (BOOL)getVendorSpecificHIDUsagePage:(unsigned int*)arg1 usageID:(unsigned int*)arg2 ignoreRepeats:(BOOL*)arg3;
- (id)initWithPayload:(unsigned long long)arg1 repeat:(BOOL)arg2;
- (BOOL)isA39PlayPauseSelect;
- (BOOL)isB39Command;
- (BOOL)isB39PlayPauseOrSelect;
- (BOOL)isPairingRequest;
- (BOOL)isStackshotRequest;
- (BOOL)isUnpairingRequest;
- (unsigned short)token;
- (unsigned short)vendorID;

@end
