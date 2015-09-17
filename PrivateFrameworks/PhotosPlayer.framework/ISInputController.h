/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISInputController : NSObject <ISInputObserver> {
    NSMapTable *__lastVitalitySignalIDByInput;
    BOOL __shouldVitalityPlayBack;
    <ISInputControllerDelegate> *_delegate;
    float _hintProgress;
    NSMutableSet *_inputs;
    float _playRate;
    int _playbackState;
    float _timeOffset;
    float _vitalityHintPlayRate;
    float _vitalityPlayRate;
    id /* block */ _vitalityPlaybackEndHandler;
    float _volume;
}

@property (nonatomic, readonly) NSMapTable *_lastVitalitySignalIDByInput;
@property (setter=_setShouldVitalityPlayBack:, nonatomic) BOOL _shouldVitalityPlayBack;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISInputControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) float hintProgress;
@property (nonatomic, readonly) NSSet *inputs;
@property (nonatomic) float playRate;
@property (nonatomic) int playbackState;
@property (readonly) Class superclass;
@property (nonatomic) float timeOffset;
@property (nonatomic) float vitalityHintPlayRate;
@property (nonatomic) float vitalityPlayRate;
@property (nonatomic, copy) id /* block */ vitalityPlaybackEndHandler;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (id)_lastVitalitySignalIDByInput;
- (void)_setHintProgress:(float)arg1;
- (void)_setPlayRate:(float)arg1;
- (void)_setPlaybackState:(int)arg1;
- (void)_setShouldVitalityPlayBack:(BOOL)arg1;
- (void)_setTimeOffset:(float)arg1;
- (void)_setVitalityHintPlayRate:(float)arg1;
- (void)_setVitalityPlayRate:(float)arg1;
- (void)_setVitalityPlaybackEndHandler:(id /* block */)arg1;
- (void)_setVolume:(float)arg1;
- (BOOL)_shouldVitalityPlayBack;
- (void)_updateState;
- (void)_vitalityPlaybackDidEnd;
- (void)addInput:(id)arg1;
- (id)delegate;
- (float)hintProgress;
- (id)init;
- (void)inputDidChange:(id)arg1;
- (id)inputs;
- (float)playRate;
- (int)playbackState;
- (void)removeAllInputs;
- (void)removeInput:(id)arg1;
- (void)setDelegate:(id)arg1;
- (float)timeOffset;
- (float)vitalityHintPlayRate;
- (float)vitalityPlayRate;
- (id /* block */)vitalityPlaybackEndHandler;
- (float)volume;

@end