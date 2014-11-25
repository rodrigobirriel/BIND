//
//  BNDInterfaceBuilderParser.h
//  BINDPlugin
//
//  Created by Marko Hlebar on 23/11/2014.
//  Copyright (c) 2014 Marko Hlebar. All rights reserved.
//

#import <AppKit/AppKit.h>
#import "BNDPluginTypes.h"

@interface BNDInterfaceBuilderParser : NSObject
@property (nonatomic, strong, readonly) NSXMLDocument *xibDocument;

+ (instancetype)parserWithXIBDocument:(NSXMLDocument *)xibDocument;
- (void)parse:(BNDBindingsBlock)bindingsBlock;

@end
