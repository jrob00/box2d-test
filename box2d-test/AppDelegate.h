//
//  AppDelegate.h
//  box2d-test
//
//  Created by Jason Roberts on 4/4/12.
//  Copyright Clover 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
