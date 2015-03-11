/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    } _has;
    NSMutableArray *_routes;
    int _status;
}

@property BOOL hasStatus;
@property(retain) NSMutableArray * routes;
@property int status;

- (void)addRoute:(id)arg1;
- (void)clearRoutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatus;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routeAtIndex:(unsigned int)arg1;
- (id)routes;
- (unsigned int)routesCount;
- (void)setHasStatus:(BOOL)arg1;
- (void)setRoutes:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end