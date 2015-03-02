//
//  OIACrystalBall.m
//  CrystalBall
//
//  Created by Oghosa Igbinakenzua on 2014-07-07.
//  Copyright (c) 2014 Oghosa Igbinakenzua. All rights reserved.
//

#import "OIACrystalBall.h"

@implementation OIACrystalBall

- (NSArray *) predictions{
    if(_predictions == nil){
        _predictions = @[@"It is Certain",
                         @"It is Decidedly so",
                         @"All signs say YES",
                         @"The stars are not aligned",
                         @"My reply is no",
                         @"It is doubtful",
                         @"Better not tell you now",
                         @"Concentrate and ask again",
                         @"Unable to answer now",
                         @"Oghosa approves",
                         @"Oghosa disapproves"];
    }
    return _predictions;
}

- (NSString*) randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}


@end
