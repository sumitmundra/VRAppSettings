//
//  VRFoundationToolkit.h
//  VRFoundationToolkit
//
//  Created by Ivan Rublev on 2/21/14.
//  Copyright (c) 2014 Ivan Rublev http://ivanrublev.me. All rights reserved.
//

/* VRFoundationToolkit 
 * This is a library of helper functions and categories for quicker operate on NSFoundation objects.
 * 
 * Project where you include following stuff needs -ObjC linker flag to link categories properly.
 */

#import <Foundation/Foundation.h>

// Import utility usefull in coding
#import "libextobjc.h"

// Routines
#import "VRLog.h"
#import "VREnum.h"
#import "NSCoder+VRKeyName.h"
#import "VRSingleton.h"
#import "VRProtocolConformation.h"

#import "NSFileManager+VRDocumentsDirectory.h"
#import "NSDate+VRDurations.h"
#import "NSString+VRmd5.h"
#import "NSObject+VRPropertiesProcessing.h"
#import "NSArray+VRCheckMembers.h"
#import "NSMutableDictionary+VRExchangeKeys.h"
#import "NSBundle+VRDisplayName.h"
#import "VRURLConnectionChecker.h"