//
//  GVYKnockoutButton.h
//  Gravity
//
//  Created by Adam Miskiewicz on 4/12/14.
//  Copyright (c) 2014 Bolster. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GVYKnockoutButton : UIButton

- (void)setupButton;

- (void)startLoading;
- (void)stopLoading;

- (void)animateIconView;

@end
