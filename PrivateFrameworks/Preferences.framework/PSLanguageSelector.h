/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSArray, NSString, NSMutableArray;

@interface PSLanguageSelector : NSObject  {
    NSString *_language;
    NSMutableArray *_supportedLanguages;
    NSArray *_supportedKeyboards;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)setLanguage:(id)arg1;
- (id)currentLanguage;
- (BOOL)_adjustLanguageIndices;
- (void)_loadSupportedLanguages;
- (void)_setLanguage:(id)arg1;
- (id)supportedLanguages;

@end