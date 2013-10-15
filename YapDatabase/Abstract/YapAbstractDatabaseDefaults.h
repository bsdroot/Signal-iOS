#import <Foundation/Foundation.h>

#import "YapAbstractDatabaseConnection.h"

/**
 * When a connection is created via [database newConnection] is will be handed one of these objects.
 * Thus the connection will inherit its initial configuration via the defaults configured for the parent database.
 *
 * Of course, the connection may then override these default configuration values, and configure itself as needed.
 *
 * @see YapAbstractDatabase defaultObjectCacheEnabled
 * @see YapAbstractDatabase defaultObjectCacheLimit
 * 
 * @see YapAbstractDatabase defaultMetadataCacheEnabled
 * @see YapAbstractDatabase defaultMetadataCacheLimit
 * 
 * @see YapAbstractDatabase defaultObjectPolicy
 * @see YapAbstractDatabase defaultMetadataPolicy
 * 
 * @see YapAbstractDatabase defaultAutoFlushMemoryLevel
**/
@interface YapAbstractDatabaseDefaults : NSObject <NSCopying>

@property (nonatomic, assign, readwrite) BOOL objectCacheEnabled;
@property (nonatomic, assign, readwrite) NSUInteger objectCacheLimit;

@property (nonatomic, assign, readwrite) BOOL metadataCacheEnabled;
@property (nonatomic, assign, readwrite) NSUInteger metadataCacheLimit;

@property (nonatomic, assign, readwrite) YapDatabasePolicy objectPolicy;
@property (nonatomic, assign, readwrite) YapDatabasePolicy metadataPolicy;

#if TARGET_OS_IPHONE
@property (nonatomic, assign, readwrite) int autoFlushMemoryLevel;
#endif

@end
