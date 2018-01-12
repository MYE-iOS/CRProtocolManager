//
//  CRProtocolManager.h
//  CRProtocolManager
//
//  Created by mye on 12/01/2018.
//  Copyright © 2018 mye. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CRProtocolManager : NSObject

+ (void)registServiceProvide:(id)provide forProtocol:(Protocol*)protocol;

+ (id)serviceProvideForProtocol:(Protocol *)protocol;

@end
