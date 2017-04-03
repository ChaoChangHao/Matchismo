//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Chang Hao Chao on 2017/3/25.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

//designed initializer
-(instancetype) initWithCardCount: (NSUInteger)count
                        usingDeck: (Deck *)deck;

-(void) chooseCardAtIndex:(NSUInteger)index;
-(Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic,readonly) NSInteger score;
@property (nonatomic) NSUInteger numMatchingCards;
@end
