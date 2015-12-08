//
//  SketchContext.m
//  MagicMirror2
//
//  Created by James Tang on 8/12/2015.
//  Copyright © 2015 James Tang. All rights reserved.
//

#import "SketchPluginContext.h"
#import "COScript.h"

@interface SketchPluginContext ()

@property (nonatomic, strong) MSPluginBundle *plugin;
@property (nonatomic, strong) MSPluginCommand *command;
@property (nonatomic, copy) NSArray *selection;
@property (nonatomic, strong) MSDocument *document;
@property (nonatomic, strong) id <COScript> coscript;

@end

@implementation SketchPluginContext

- (id)initWithPlugin:(MSPluginBundle *)plugin
            document:(MSDocument *)document
           selection:(NSArray *)selection
             command:(MSPluginCommand *)command {
    if (self = [super init]) {
        _plugin = plugin;
        _command = command;
        _selection = [selection copy];
        _document = document;
        _coscript = (id <COScript>)command.session;
        return self;
    }
    return nil;
}

- (void)setShouldKeepAround:(BOOL)shouldKeepAround {
    _shouldKeepAround = shouldKeepAround;
    _coscript.shouldKeepAround = shouldKeepAround;
}

@end
