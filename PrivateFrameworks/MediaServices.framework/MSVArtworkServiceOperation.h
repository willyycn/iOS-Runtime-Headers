/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkServiceOperation : NSOperation {
    NSError *_operationError;
    MSVArtworkServiceRequest *_request;
}

@property (nonatomic, readonly) NSError *operationError;
@property (nonatomic, readonly) MSVArtworkServiceRequest *request;

- (void).cxx_destruct;
- (id)initWithArtworkRequest:(id)arg1;
- (id)operationError;
- (id)request;
- (void)setOperationError:(id)arg1;

@end
