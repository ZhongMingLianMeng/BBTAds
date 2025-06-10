//
//  BBTRewardedVideoAd.h
//  BBTAds
//
//  Created by AI on 2024/3/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BBTRewardedVideoAdDelegate <NSObject>

@required
- (void)rewardedVideoAdDidShow;
- (void)rewardedVideoAdDidClick;
- (void)rewardedVideoAdDidClose;
- (void)rewardedVideoAdDidEarnReward;
- (void)rewardedVideoAdDidFailToShow:(NSError *)error;

@end

@interface BBTRewardedVideoAd : NSObject

@property (nonatomic, weak) id<BBTRewardedVideoAdDelegate> delegate;
@property (nonatomic, copy, readonly) NSString *mediaId;

- (instancetype)initWithMediaId:(NSString *)mediaId;
- (void)setupWithAdData:(NSDictionary *)adData;
- (void)showFromViewController:(UIViewController *)viewController;
- (void)dismiss;

@end

NS_ASSUME_NONNULL_END 