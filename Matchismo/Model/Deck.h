//
//  Deck.h
//  Matchismo
//
//  Created by Chang Hao Chao on 2017/3/25.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

-(void) addCard:(Card *)card atTop:(BOOL)atTop;
-(void) addCard:(Card *)card;

-(Card *) drawRandomCard;

@end
