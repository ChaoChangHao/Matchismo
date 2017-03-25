//
//  Card.h
//  Matchismo
//
//  Created by Chang Hao Chao on 2017/3/25.
//  Copyright © 2017年 Chang Hao Chao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property(strong, nonatomic) NSString *contents;
@property(nonatomic, getter=isChosen) BOOL chosen;
@property(nonatomic, getter=isMatched) BOOL matched;
-(int) match:(NSArray *) otherCards;

@end
