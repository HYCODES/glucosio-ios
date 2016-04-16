#import <Foundation/Foundation.h>
#import "GLUCModel.h"
#import "GLUCReading.h"

static NSString *const kGLUCReadingReadingTypeIdPropertyKey = @"readingTypeId";

@interface GLUCBloodGlucoseReading : GLUCReading

@property (nonatomic, readwrite, strong) NSNumber *readingTypeId;

+ (NSArray *) readingTypes;
- (NSString *) readingType;

- (NSString *) readingTypeForId:(NSInteger) readingTypeId;
- (NSInteger) readingTypeIdForHourOfDay:(NSInteger)hour;

@end
