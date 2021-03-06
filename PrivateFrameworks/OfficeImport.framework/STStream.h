/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STStream : STSStgObject {
    struct _Stream { } *m_pCStream;
}

@property(readonly) struct _Stream { }* cStream;

- (struct _Stream { }*)cStream;
- (void)close;
- (void)dealloc;
- (id)getInfo;
- (unsigned long)getPos;
- (id)initWithCStream:(struct _Stream { }*)arg1;
- (id)readBytes:(unsigned long)arg1;
- (unsigned long long)readLEUnsignedLongLong;
- (unsigned char)readLEboolean;
- (unsigned char)readLEbyte;
- (BOOL)readLEchar;
- (double)readLEdouble;
- (unsigned long)readLEdword;
- (float)readLEfloat;
- (long)readLElong;
- (short)readLEshort;
- (unsigned short)readLEunichar;
- (unsigned short)readLEword;
- (id)readLEwstring:(unsigned long)arg1;
- (void)releaseCStream;
- (void)seek:(long)arg1 fromOrigin:(int)arg2;
- (void)setClass:(struct { unsigned int x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; })arg1;
- (void)writeBytes:(id)arg1;
- (void)writeLEboolean:(unsigned char)arg1;
- (void)writeLEbyte:(unsigned char)arg1;
- (void)writeLEchar:(BOOL)arg1;
- (void)writeLEdouble:(double)arg1;
- (void)writeLEdword:(unsigned long)arg1;
- (void)writeLEfloat:(float)arg1;
- (void)writeLElong:(long)arg1;
- (void)writeLEshort:(short)arg1;
- (void)writeLEunichar:(unsigned short)arg1;
- (void)writeLEword:(unsigned short)arg1;
- (void)writeLEwstring:(id)arg1;
- (void)writeLEwstringNoTerminator:(id)arg1;

@end
