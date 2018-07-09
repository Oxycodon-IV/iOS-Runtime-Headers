/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBContactValue : PBCodable <NSCopying> {
    NSMutableArray * _aliases;
    _INPBContactHandle * _contactHandle;
    NSString * _customIdentifier;
    NSString * _firstName;
    NSString * _fullName;
    struct { 
        unsigned int suggestionType : 1; 
        unsigned int isMe : 1; 
    }  _has;
    _INPBImageValue * _image;
    bool  _isMe;
    NSString * _lastName;
    NSString * _nickName;
    NSString * _relationship;
    int  _suggestionType;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) NSMutableArray *aliases;
@property (nonatomic, retain) _INPBContactHandle *contactHandle;
@property (nonatomic, retain) NSString *customIdentifier;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, readonly) bool hasContactHandle;
@property (nonatomic, readonly) bool hasCustomIdentifier;
@property (nonatomic, readonly) bool hasFirstName;
@property (nonatomic, readonly) bool hasFullName;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic) bool hasIsMe;
@property (nonatomic, readonly) bool hasLastName;
@property (nonatomic, readonly) bool hasNickName;
@property (nonatomic, readonly) bool hasRelationship;
@property (nonatomic) bool hasSuggestionType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, retain) _INPBImageValue *image;
@property (nonatomic) bool isMe;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *nickName;
@property (nonatomic, retain) NSString *relationship;
@property (nonatomic) int suggestionType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (Class)aliasesType;
+ (id)options;

- (void).cxx_destruct;
- (int)StringAsSuggestionType:(id)arg1;
- (void)addAliases:(id)arg1;
- (id)aliases;
- (id)aliasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aliasesCount;
- (void)clearAliases;
- (id)contactHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstName;
- (id)fullName;
- (bool)hasContactHandle;
- (bool)hasCustomIdentifier;
- (bool)hasFirstName;
- (bool)hasFullName;
- (bool)hasImage;
- (bool)hasIsMe;
- (bool)hasLastName;
- (bool)hasNickName;
- (bool)hasRelationship;
- (bool)hasSuggestionType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (id)nickName;
- (bool)readFrom:(id)arg1;
- (id)relationship;
- (void)setAliases:(id)arg1;
- (void)setContactHandle:(id)arg1;
- (void)setCustomIdentifier:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setHasIsMe:(bool)arg1;
- (void)setHasSuggestionType:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)suggestionType;
- (id)suggestionTypeAsString:(int)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end