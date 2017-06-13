//
//  RavenAdapter.m
//  Adapter
//
//  Created by Vasilii on 13.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "RavenAdapter.h"

@implementation RavenAdapter

@synthesize raven = _raven;

- (id)initWithRaven:(Raven *)appdate
{
    self = [super init];
    _raven = appdate; //!!!
    return self;
}

- (void)sing
{
    [_raven voice];
}

- (void)fly
{
    [_raven flySearchAndDestroy];
}

@end
