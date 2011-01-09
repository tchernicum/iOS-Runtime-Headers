/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, NSString;



@interface UIKBKeyboard : UIKBShape <NSCoding>
{
    NSString *m_name;
    NSString *m_visualStyle;
    NSMutableArray *m_keyplanes;
    NSMutableDictionary *m_keyCache;
}

@property(retain) NSDictionary *keyCache;
@property(retain) NSArray *keyplanes;
@property(retain) NSString *visualStyle;
@property(retain) NSString *name;

+ (id)keyboard;

- (id)init;
- (void)dealloc;
- (void)cacheKey:(id)arg1 onKeyplane:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)keyplaneWithName:(id)arg1;
- (id)description;
- (void)layout;
- (id)keyCache;
- (void)setKeyCache:(id)arg1;
- (id)keyplanes;
- (void)setKeyplanes:(id)arg1;
- (id)visualStyle;
- (void)setVisualStyle:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end