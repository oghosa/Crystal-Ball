//
//  OIAViewController.h
//  CrystalBall
//
//  Created by Oghosa Igbinakenzua on 2014-07-07.
//  Copyright (c) 2014 Oghosa Igbinakenzua. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OIACrystalBall;

@interface OIAViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) OIACrystalBall *crystalBall;
@property (strong, nonatomic) NSArray *colors;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void) makePredicion;

@end
