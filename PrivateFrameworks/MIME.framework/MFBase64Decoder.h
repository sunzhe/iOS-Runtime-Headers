/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer  {
    NSMutableData *_leftovers;
    unsigned int _decodedBits;
    unsigned int _validBytes;
    unsigned int _equalCount;
    char *_table;
    BOOL _bound;
}

@property BOOL convertCommas;
@property BOOL isBound;
@property(readonly) unsigned int unconverted;

+ (BOOL)isValidBase64:(id)arg1;

- (int)appendData:(id)arg1;
- (void)done;
- (void)dealloc;
- (BOOL)isBound;
- (unsigned long)_decodeBytes:(const char *)arg1 end:(const char *)arg2 into:(char *)arg3 length:(unsigned long)arg4 startingAt:(unsigned long)arg5 outEncodedOffset:(unsigned int*)arg6;
- (void)setConvertCommas:(BOOL)arg1;
- (BOOL)convertCommas;
- (unsigned long)unconverted;
- (id)initWithConsumers:(id)arg1;
- (void)setIsBound:(BOOL)arg1;

@end