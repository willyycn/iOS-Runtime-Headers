/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUSpringAnimationFactory : MPUAnimationFactory {
    float _damping;
    float _mass;
    float _stiffness;
    float _velocity;
}

@property (nonatomic) float damping;
@property (nonatomic) float mass;
@property (nonatomic) float stiffness;
@property (nonatomic) float velocity;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (float)damping;
- (float)mass;
- (void)setDamping:(float)arg1;
- (void)setMass:(float)arg1;
- (void)setStiffness:(float)arg1;
- (void)setVelocity:(float)arg1;
- (float)stiffness;
- (float)velocity;

@end
