/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class NSMutableArray;



@interface MKSearchResultManager : NSObject 
{
    NSMutableArray *_zoomLevelSearchResults;
    NSMutableArray *_allSearchResults;
    float _viewPortHeight;
    float _viewPortWidth;
    id _delegate;
}

@property id delegate; /* unknown property attribute: V_delegate */
@property float viewPortWidth; /* unknown property attribute: V_viewPortWidth */
@property float viewPortHeight; /* unknown property attribute: V_viewPortHeight */


- (id)initWithViewPortSize:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (void)clearResults;
- (void)_filterExistingSearchResultsFromNewResults:(id)arg1;
- (NSInteger)_addSearchResultsToZoomLevels:(id)arg1;
- (BOOL)isSearchResult:(id)arg1 insideViewPortWithOrigin:(struct CGPoint { float x1; float x2; })arg2 zoomLevel:(NSInteger)arg3;
- (id)visibleResultsInCenterLongLat:(struct CGPoint { float x1; float x2; })arg1 longLatSpan:(struct CGSize { float x1; float x2; })arg2 zoomLevel:(NSInteger)arg3;
- (void)removeSearchResults:(id)arg1;
- (void)_compactSearchResultsReferenceLongLat:(struct CGPoint { float x1; float x2; })arg1;
- (id)addSearchResults:(id)arg1 centerLongLat:(struct CGPoint { float x1; float x2; })arg2 zoomLevel:(NSInteger)arg3;
- (id)resultsForZoomLevel:(NSInteger)arg1;
- (void)resultsDeltaForZoomLevel:(NSInteger)arg1 toZoomLevel:(NSInteger)arg2 addResults:(id*)arg3 removeResult:(id*)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (float)viewPortWidth;
- (void)setViewPortWidth:(float)arg1;
- (float)viewPortHeight;
- (void)setViewPortHeight:(float)arg1;

@end