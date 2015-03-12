/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSString;

@interface MCEmailAccountPayloadBase : MCPayload {
    BOOL _SMIMEEnabled;
    NSData *_SMIMEEncryptionIdentityPersistentID;
    NSString *_SMIMEEncryptionIdentityUUID;
    BOOL _SMIMEPerMessageSwitchEnabled;
    NSData *_SMIMESigningIdentityPersistentID;
    NSString *_SMIMESigningIdentityUUID;
    BOOL _isRecentsSyncingDisabled;
    BOOL _preventAppSheet;
    BOOL _preventMove;
}

@property BOOL SMIMEEnabled;
@property(retain) NSData * SMIMEEncryptionIdentityPersistentID;
@property(retain) NSString * SMIMEEncryptionIdentityUUID;
@property BOOL SMIMEPerMessageSwitchEnabled;
@property(retain) NSData * SMIMESigningIdentityPersistentID;
@property(retain) NSString * SMIMESigningIdentityUUID;
@property BOOL isRecentsSyncingDisabled;
@property BOOL preventAppSheet;
@property BOOL preventMove;

- (void).cxx_destruct;
- (BOOL)SMIMEEnabled;
- (id)SMIMEEncryptionIdentityPersistentID;
- (id)SMIMEEncryptionIdentityUUID;
- (BOOL)SMIMEPerMessageSwitchEnabled;
- (id)SMIMESigningIdentityPersistentID;
- (id)SMIMESigningIdentityUUID;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (BOOL)isRecentsSyncingDisabled;
- (id)payloadDescriptionKeyValueSections;
- (BOOL)preventAppSheet;
- (BOOL)preventMove;
- (void)setIsRecentsSyncingDisabled:(BOOL)arg1;
- (void)setPreventAppSheet:(BOOL)arg1;
- (void)setPreventMove:(BOOL)arg1;
- (void)setSMIMEEnabled:(BOOL)arg1;
- (void)setSMIMEEncryptionIdentityPersistentID:(id)arg1;
- (void)setSMIMEEncryptionIdentityUUID:(id)arg1;
- (void)setSMIMEPerMessageSwitchEnabled:(BOOL)arg1;
- (void)setSMIMESigningIdentityPersistentID:(id)arg1;
- (void)setSMIMESigningIdentityUUID:(id)arg1;
- (id)stubDictionary;

@end