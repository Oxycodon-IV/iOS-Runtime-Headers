/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray, NSMutableDictionary, <ISDownloadQueueDelegate>;



@interface ISDownloadQueue : NSObject 
{
    NSInteger _assetTypes;
    <ISDownloadQueueDelegate> *_delegate;
    NSMutableArray *_downloads;
    NSMutableDictionary *_downloadsByItemIdentifier;
    NSInteger _lastUpdatedIndex;
    NSMutableArray *_placeholders;
    NSMutableArray *_preorders;
    BOOL _registeredWithDaemon;
}

@property(retain,readonly) NSArray *preorders;
@property(retain,readonly) NSArray *placeholderDownloads;
@property(retain,readonly) NSArray *downloads;
@property <ISDownloadQueueDelegate> *delegate;
@property NSInteger assetTypes;

+ (id)bundlesInstalledSinceLastSync;
+ (id)downloadQueueForAssetType:(NSInteger)arg1;
+ (void)postTriggerDownloadNotifications;

- (id)initWithAssetTypes:(NSInteger)arg1;
- (void)dealloc;
- (void)addDownload:(id)arg1;
- (void)addPlaceholderDownloads:(id)arg1;
- (BOOL)checkQueue;
- (id)downloadForItemIdentifier:(id)arg1;
- (BOOL)removeDownload:(id)arg1;
- (void)removePlaceholderDownload:(id)arg1;
- (BOOL)startPreOrderDownload:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)_daemonExitedMainThread:(id)arg1;
- (void)_downloadsAdded:(id)arg1;
- (void)_downloadsChanged:(id)arg1;
- (void)_downloadsRemoved:(id)arg1;
- (void)_downloadsReplaced:(id)arg1;
- (void)_downloadStatusChanged:(id)arg1;
- (void)_preOrdersChanged:(id)arg1;
- (void)_purchaseRemovedNotification:(id)arg1;
- (void)_checkIn;
- (void)_checkOut;
- (id)_copyDownloadsByItemIdentifier;
- (id)_copyDownloadsByRemovingPlaceholdersForIdentifier:(unsigned long long)arg1;
- (id)_createRepresentativeDownloadForPreOrder:(id)arg1;
- (void)_filterPlaceholderDownloads;
- (NSInteger)_indexOfDownloadWithIdentifier:(unsigned long long)arg1;
- (void)_noteQueueChangedWithRemovals:(id)arg1;
- (void)_registerWithDaemon;
- (id)preorders;
- (id)placeholderDownloads;
- (id)downloads;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (NSInteger)assetTypes;
- (void)setAssetTypes:(NSInteger)arg1;

@end