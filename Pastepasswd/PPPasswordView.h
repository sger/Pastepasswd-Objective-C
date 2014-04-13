//
//  PPPasswordView.h
//  Pastepasswd
//
//  Created by Spiros Gerokostas on 3/31/14.
//  Copyright (c) 2014 Spiros Gerokostas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PPPasswordView : UIView
@property (nonatomic, strong) UITextField *passwordLabel;
@property (nonatomic, strong) UITextField *passwordSecureLabel;
@property (nonatomic, strong) UIView *normalTextContainer;
@property (nonatomic, strong) UIView *secureTextContainer;

- (void)slideOut;
- (void)slideIn;
@end
