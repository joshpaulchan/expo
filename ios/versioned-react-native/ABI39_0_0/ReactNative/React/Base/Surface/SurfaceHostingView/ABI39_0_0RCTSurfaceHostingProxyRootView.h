/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ABI39_0_0React/ABI39_0_0RCTRootView.h>

#import "ABI39_0_0RCTSurfaceHostingView.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * This is a ABI39_0_0RCTRootView-compatible implementation of ABI39_0_0RCTSurfaceHostingView.
 * Use this class to replace all usages of ABI39_0_0RCTRootView in the app for easier migration
 * to ABI39_0_0RCTSurfaceHostingView.
 *
 * WARNING: In the future, ABI39_0_0RCTRootView will be deprecated in favor of ABI39_0_0RCTSurfaceHostingView.
 */
@interface ABI39_0_0RCTSurfaceHostingProxyRootView : ABI39_0_0RCTSurfaceHostingView

#pragma mark ABI39_0_0RCTRootView compatibility - keep these sync'ed with ABI39_0_0RCTRootView.h

@property (nonatomic, copy, readonly) NSString *moduleName;
@property (nonatomic, strong, readonly) ABI39_0_0RCTBridge *bridge;
@property (nonatomic, copy, readwrite) NSDictionary *appProperties;
@property (nonatomic, assign) ABI39_0_0RCTRootViewSizeFlexibility sizeFlexibility;
@property (nonatomic, weak) id<ABI39_0_0RCTRootViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *ABI39_0_0ReactViewController;
@property (nonatomic, strong, readonly) UIView *contentView;
@property (nonatomic, strong) UIView *loadingView;
@property (nonatomic, assign) BOOL passThroughTouches;
@property (nonatomic, assign) NSTimeInterval loadingViewFadeDelay;
@property (nonatomic, assign) NSTimeInterval loadingViewFadeDuration;

- (instancetype)initWithBridge:(ABI39_0_0RCTBridge *)bridge
                    moduleName:(NSString *)moduleName
             initialProperties:(NSDictionary *)initialProperties NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithBundleURL:(NSURL *)bundleURL
                       moduleName:(NSString *)moduleName
                initialProperties:(NSDictionary *)initialProperties
                    launchOptions:(NSDictionary *)launchOptions;

- (instancetype)initWithSurface:(ABI39_0_0RCTSurface *)surface
                sizeMeasureMode:(ABI39_0_0RCTSurfaceSizeMeasureMode)sizeMeasureMode NS_UNAVAILABLE;

- (void)cancelTouches;

@end

NS_ASSUME_NONNULL_END
