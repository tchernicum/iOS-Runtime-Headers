/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKNetworkActivityManager : NSObject {
    NSInteger _count;
    BOOL _enabled;
}

+ (id)sharedManager;

- (void)beginNetworkActivity;
- (void)endNetworkActivity;
- (id)init;
- (void)resetNetworkActivity;

@end