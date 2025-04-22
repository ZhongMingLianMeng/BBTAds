//
//  BBTRewardedVideoManager.h
//  BBTAds
//
//  Created by AI on 2024/3/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BBTRewardedVideoDelegate <NSObject>

@required
- (void)rewardedVideoAdDidLoad;
- (void)rewardedVideoAdDidFailToLoad:(NSError *)error;
- (void)rewardedVideoAdDidShow;
- (void)rewardedVideoAdDidFailToShow:(NSError *)error;
- (void)rewardedVideoAdDidClick;
- (void)rewardedVideoAdDidClose;
- (void)rewardedVideoAdDidEarnReward;

@end

@interface BBTRewardedVideoManager : NSObject

@property (nonatomic, weak) id<BBTRewardedVideoDelegate> delegate;
@property (nonatomic, copy) NSString *mediaId;
@property (nonatomic, weak) UIViewController *showAdController;

- (void)loadAdData;
- (void)showRewardedVideo;
- (BOOL)isReady;

@end

NS_ASSUME_NONNULL_END 