//
//  MMController.h
//  MagicMirror2
//
//  Created by James Tang on 11/12/2015.
//  Copyright © 2015 James Tang. All rights reserved.
//

#ifndef MMController_h
#define MMController_h

@class MagicMirror;

@protocol MMController <NSObject>

@property MagicMirror *magicmirror;

- (void)reloadData;

@end

#endif /* MMController_h */
