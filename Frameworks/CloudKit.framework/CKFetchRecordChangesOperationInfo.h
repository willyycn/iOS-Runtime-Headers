/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    int _changeTypes;
    NSArray *_desiredKeys;
    CKServerChangeToken *_previousServerChangeToken;
    CKRecordZoneID *_recordZoneID;
    unsigned int _resultsLimit;
    BOOL _shouldFetchAssetContents;
}

@property (nonatomic) int changeTypes;
@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic, retain) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic) BOOL shouldFetchAssetContents;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)changeTypes;
- (id)desiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previousServerChangeToken;
- (id)recordZoneID;
- (unsigned int)resultsLimit;
- (void)setChangeTypes:(int)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setShouldFetchAssetContents:(BOOL)arg1;
- (BOOL)shouldFetchAssetContents;

@end
