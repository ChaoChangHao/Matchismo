//
//  PlayingCard.h
//  Matchismo
//
//  Created by Chang Hao Chao on 2017/3/25.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property(strong, nonatomic) NSString *suit;
@property(nonatomic) NSUInteger rank;
+(NSArray *)validSuits; //public
+(NSUInteger) maxRank;

@end
