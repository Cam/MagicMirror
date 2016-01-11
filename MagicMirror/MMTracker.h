//
//  MMTracker.h
//  MagicMirror2
//
//  Created by James Tang on 11/1/2016.
//  Copyright © 2016 James Tang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MMController.h"

@protocol MMTracker <NSObject>

- (void)track:(NSString *)event;
- (void)track:(NSString *)event properties:(NSDictionary *)properties;
- (void)registerProperties:(NSDictionary *)properties;

@end

@interface MMTracker : MMController <MMTracker>


@end
