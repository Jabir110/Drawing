//
//  SettingsViewController.h
//  PaintEditor
//
//  Created by GadgetZone on 29/09/16.
//  Copyright © 2016 GadgetZone. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SettingsViewControllerDelegate <NSObject>
- (void)closeSettings:(id)sender;
@end

@interface SettingsViewController : UIViewController

@property CGFloat brush;
@property CGFloat opacity;
@property CGFloat red;
@property CGFloat green;
@property CGFloat blue;

@property (nonatomic, weak) id<SettingsViewControllerDelegate> delegate;
-(void)SetPaint:(CGFloat) brush opacity:(CGFloat)opacity red:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue;

@end
