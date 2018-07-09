/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityEventItemIDs : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _cloudID;
    long long  _equivalencySourceAdamID;
    NSString * _lyricsID;
    long long  _purchasedAdamID;
    long long  _radioAdamID;
    long long  _subscriptionAdamID;
    long long  _tvShowPurchasedAdamID;
    long long  _tvShowSubscriptionAdamID;
}

@property (nonatomic, readonly) unsigned long long cloudID;
@property (nonatomic, readonly) long long equivalencySourceAdamID;
@property (nonatomic, readonly, copy) NSString *lyricsID;
@property (nonatomic, readonly) long long purchasedAdamID;
@property (nonatomic, readonly) long long radioAdamID;
@property (nonatomic, readonly) long long subscriptionAdamID;
@property (nonatomic, readonly) long long tvShowPurchasedAdamID;
@property (nonatomic, readonly) long long tvShowSubscriptionAdamID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (unsigned long long)cloudID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)equivalencySourceAdamID;
- (id)initWithCoder:(id)arg1;
- (id)lyricsID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)purchasedAdamID;
- (long long)radioAdamID;
- (long long)subscriptionAdamID;
- (long long)tvShowPurchasedAdamID;
- (long long)tvShowSubscriptionAdamID;

@end