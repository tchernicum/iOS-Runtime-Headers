/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSData;

@interface DataScanner : NSObject {
    NSData *myData;
    NSUInteger myLocation;
}

+ (id)scannerWithData:(id)arg1;

- (BOOL)byteAtScanLocation;
- (id)data;
- (void)dealloc;
- (void)incrementLocation;
- (id)initWithData:(id)arg1;
- (BOOL)isAtEnd;
- (id)nextTokenWithPunctuation:(id)arg1;
- (BOOL)scanByte:(char *)arg1;
- (BOOL)scanBytesFromSet:(id)arg1 intoData:(id*)arg2;
- (BOOL)scanCString:(const char *)arg1 intoData:(id*)arg2;
- (BOOL)scanData:(id)arg1 intoData:(id*)arg2;
- (BOOL)scanInt:(NSInteger*)arg1;
- (NSUInteger)scanLocation;
- (BOOL)scanUpToBytesFromSet:(id)arg1 intoData:(id*)arg2;
- (BOOL)scanUpToCString:(const char *)arg1 intoData:(id*)arg2;
- (BOOL)scanUpToData:(id)arg1 intoData:(id*)arg2;
- (void)setData:(id)arg1;
- (void)setScanLocation:(NSUInteger)arg1;

@end