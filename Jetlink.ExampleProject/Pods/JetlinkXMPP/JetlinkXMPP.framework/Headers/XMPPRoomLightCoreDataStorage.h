//
//  XMPPRoomLightCoreDataStorage.h
//  Mangosta
//
//  Created by Andres Canal on 6/8/16.
//  Copyright © 2016 Inaka. All rights reserved.
//

#import <JetlinkXMPP/JetlinkXMPP.h>
#import <JetlinkXMPP/XMPPCoreDataStorage.h>
#import <JetlinkXMPP/XMPPRoomLight.h>

@protocol XMPPRoomLightStorage;
@class XMPPRoomLight;

@interface XMPPRoomLightCoreDataStorage : XMPPCoreDataStorage <XMPPRoomLightStorage>

- (void)handleIncomingMessage:(XMPPMessage *)message room:(XMPPRoomLight *)room;
- (void)handleOutgoingMessage:(XMPPMessage *)message room:(XMPPRoomLight *)room;

@end
