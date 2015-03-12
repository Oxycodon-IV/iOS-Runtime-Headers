/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@class NLArcView, UIImageView;

@interface NLThreeRingView : UIView {
    NLArcView *_briskArcView;
    NLArcView *_calorieArcView;
    UIImageView *_fadedView;
    float _interspacing;
    float _lineThickness;
    float _outerDiameter;
    NLArcView *_sedentaryArcView;
}

@property(retain) NLArcView * briskArcView;
@property(retain) NLArcView * calorieArcView;
@property(retain) UIImageView * fadedView;
@property float interspacing;
@property float lineThickness;
@property float outerDiameter;
@property(retain) NLArcView * sedentaryArcView;

- (void).cxx_destruct;
- (id)_generateArcWithNesting:(int)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (id)_generateBriskArc;
- (id)_generateCalorieArc;
- (id)_generateSedentaryArc;
- (id)briskArcView;
- (id)calorieArcView;
- (id)fadedRingImageForDiameter:(float)arg1 interspacing:(float)arg2 thickness:(float)arg3;
- (id)fadedView;
- (id)image;
- (id)initWithDiameter:(float)arg1 interspacing:(float)arg2 thickness:(float)arg3 delegate:(id)arg4;
- (float)interspacing;
- (float)lineThickness;
- (float)outerDiameter;
- (id)sedentaryArcView;
- (void)setBriskArcView:(id)arg1;
- (void)setBriskPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setCalorieArcView:(id)arg1;
- (void)setCalorieExpectedPercentage:(float)arg1;
- (void)setCaloriePercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setFaded:(BOOL)arg1;
- (void)setFadedView:(id)arg1;
- (void)setInterspacing:(float)arg1;
- (void)setLineThickness:(float)arg1;
- (void)setOuterDiameter:(float)arg1;
- (void)setRingsCalorieAlpha:(float)arg1 briskAlpha:(float)arg2 sedentaryAlpha:(float)arg3;
- (void)setSedentaryArcView:(id)arg1;
- (void)setSedentaryPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setShowExpectedDot:(BOOL)arg1;

@end