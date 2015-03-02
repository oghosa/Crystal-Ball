//
//  OIACrystalBall.h
//  CrystalBall
//
//  Created by Oghosa Igbinakenzua on 2014-07-07.
//  Copyright (c) 2014 Oghosa Igbinakenzua. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OIACrystalBall : NSObject {
    NSArray *_predictions;
}
@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString*) randomPrediction;

@end
