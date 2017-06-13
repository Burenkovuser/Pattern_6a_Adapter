//
//  RavenAdapter.h
//  Adapter
//
//  Created by Vasilii on 13.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BirdProtocol.h"
#import "Raven.h"

@interface RavenAdapter : NSObject <BirdProtocol> {
@private Raven *_raven; //завернули ворона в обертку протоколом BirdProtocol
}

@property (nonatomic, strong) Raven *raven;

- (id) initWithRaven:(Raven *) appdate;

@end
