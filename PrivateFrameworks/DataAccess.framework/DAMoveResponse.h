/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;



@interface DAMoveResponse : NSObject 
{
    NSInteger _status;
    NSString *_sourceID;
    NSString *_destID;
}


- (id)initWithStatus:(NSInteger)arg1 sourceID:(id)arg2 destID:(id)arg3;
- (NSInteger)status;
- (id)sourceID;
- (id)destID;
- (void)dealloc;

@end