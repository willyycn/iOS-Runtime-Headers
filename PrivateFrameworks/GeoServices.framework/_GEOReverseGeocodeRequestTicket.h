/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket> {
    BOOL _shiftLocationsIfNeeded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *searchQuery;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (id)initWithRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3;
- (id)searchQuery;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
