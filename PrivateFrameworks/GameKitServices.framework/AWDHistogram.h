/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

@interface AWDHistogram : NSObject  {
    unsigned int *histogram;
    unsigned int *buckets;
    float *floatBuckets;
    unsigned int size;
}


- (void)reset;
- (id)array;
- (void)dealloc;
- (void)print;
- (void)reduceFrequencyByFactor:(unsigned int)arg1;
- (void)addFloatValue:(float)arg1;
- (void)addValue:(unsigned int)arg1;
- (id)initWithFloatBuckets:(float*)arg1 size:(unsigned int)arg2;
- (id)initWithBuckets:(unsigned int*)arg1 size:(unsigned int)arg2;
- (void)addValue:(unsigned int)arg1 withIncrements:(unsigned int)arg2;

@end