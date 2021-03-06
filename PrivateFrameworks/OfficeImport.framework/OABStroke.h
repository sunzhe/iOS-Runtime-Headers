/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface OABStroke : NSObject {
}

+ (int)readCapStyle:(int)arg1;
+ (int)readCompoundType:(int)arg1;
+ (int)readLineEndLength:(int)arg1;
+ (int)readLineEndType:(int)arg1;
+ (int)readLineEndWidth:(int)arg1;
+ (id)readLineEndWithType:(int)arg1 width:(int)arg2 length:(int)arg3;
+ (int)readPresetDashStyle:(int)arg1;
+ (id)readStrokeFromShapeBaseManager:(id)arg1 colorPalette:(id)arg2;
+ (int)writeCapStyle:(int)arg1;
+ (int)writeCompoundType:(int)arg1;
+ (int)writeLineEndLength:(int)arg1;
+ (int)writeLineEndType:(int)arg1;
+ (int)writeLineEndWidth:(int)arg1;
+ (int)writePresetDashStyle:(int)arg1;
+ (void)writePresetDashStyleForCustomDash:(id)arg1 toStroke:(struct EshStroke { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2 state:(id)arg3;
+ (void)writeStroke:(id)arg1 toStroke:(struct EshStroke { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2 state:(id)arg3;

@end
