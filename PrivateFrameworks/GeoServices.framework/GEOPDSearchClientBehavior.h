/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchClientBehavior : PBCodable <NSCopying> {
    struct { 
        unsigned int shouldEnableRedoSearch : 1; 
    }  _has;
    BOOL  _shouldEnableRedoSearch;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) BOOL hasShouldEnableRedoSearch;
@property (nonatomic) BOOL shouldEnableRedoSearch;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasShouldEnableRedoSearch;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasShouldEnableRedoSearch:(BOOL)arg1;
- (void)setShouldEnableRedoSearch:(BOOL)arg1;
- (BOOL)shouldEnableRedoSearch;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end