//
//  EPEuler1.m
//  Euler problems
//
//  Created by Brian on 13/12/12.
//  Copyright (c) 2012 Brian Jones. All rights reserved.
//

#import "EPEuler1.h"

@implementation EPEuler1
+(int) findSumTo: (int) target ofMults: (int) mult
{
    // based on sum of sequences we can work out the sum of each set of multiples from 1 to 1000
    int n = (int) floor(target/mult);
    return ((n+1)*(n/2)*mult);
};

+(NSInteger) Calculate{
    int multThrees = [self findSumTo:1000 ofMults:3];
    int multFives = [self findSumTo:1000 ofMults:5];
    int multFifteens = [self findSumTo:1000 ofMults:15];
    return multThrees + multFives - multFifteens;
};



@end
