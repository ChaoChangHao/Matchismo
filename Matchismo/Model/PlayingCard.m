//
//  PlayingCard.m
//  Matchismo
//
//  Created by Chang Hao Chao on 2017/3/25.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//


#import "PlayingCard.h"

@implementation PlayingCard

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    if([otherCards count] == 1) {
        PlayingCard *otherCard = [otherCards firstObject];
        if(otherCard.rank == self.rank) {
            score = 4;
        } else if([otherCard.suit isEqualToString:self.suit]) {
            score = 1;
        }
    }
    return score;
}
-(NSString *) contents{
    NSArray *rankStrings = [PlayingCard rankStrings];
    return [rankStrings[self.rank] stringByAppendingString:self.suit];
}

@synthesize suit = _suit; //because we provide setter AND getter

-(NSString *) suit { //getter
    return _suit ? _suit : @"?";
}

-(void) setSuit:(NSString *)suit { //setter
    if([[PlayingCard validSuits] containsObject:suit]) {
        _suit = suit;
    }
}

+(NSArray *)rankStrings{
    return @[@"?", @"A", @"2", @"3", @"4", @"5", @"6", @"7", @"8", @"9", @"10", @"J", @"Q", @"K"];
}

+(NSArray *)validSuits{
    return @[@"♠️", @"♣️", @"♥️", @"♦️"];
}

+(NSUInteger) maxRank{
    return [[self rankStrings] count] - 1;
}

-(void)setRank:(NSUInteger)rank{
    if(rank<=[PlayingCard maxRank]){
        _rank = rank;
    }
}
@end
