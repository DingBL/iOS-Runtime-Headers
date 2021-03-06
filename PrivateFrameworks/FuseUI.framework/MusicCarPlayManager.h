/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicCarPlayManager : NSObject <MCDCarDisplayServiceProvider> {
    MCDRootController * _carDisplayController;
    MPCMediaPlayerLegacyPlayer * _legacyPlayer;
    RadioRecentStationsController * _recentStationsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MPCMediaPlayerLegacyPlayer *legacyPlayer;
@property (nonatomic) RadioRecentStationsController *recentStationsController;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_attachToStarkScreen:(id)arg1;
- (id)_init;
- (void)_screenDidConnectNotification:(id)arg1;
- (void)_screenDidDisconnectNotification:(id)arg1;
- (void)_setupPlaybackForPlayer:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)attachToAvailableScreen;
- (void)changeRepeatType:(int)arg1;
- (void)changeShuffleType:(int)arg1;
- (void)dealloc;
- (void)detachFromScreen;
- (id)legacyPlayer;
- (id)recentStationsController;
- (void)reloadPlayer:(id)arg1 mediaQuery:(id)arg2 options:(id)arg3;
- (void)reloadPlayer:(id)arg1 radioMetadata:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)reloadPlayer:(id)arg1 radioStation:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)setLegacyPlayer:(id)arg1;
- (void)setRecentStationsController:(id)arg1;
- (void)showNowPlaying:(BOOL)arg1;

@end
