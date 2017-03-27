/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSOutlookEmailAddress;

#import <Foundation/Foundation.h>
#import "MSOutlookProtocols.h"


/**
* The header for type Recipient.
*/

@interface MSOutlookRecipient : NSObject

@property (retain, nonatomic, readonly) NSString *odataType;
@property (retain, nonatomic, readwrite, getter=emailAddress, setter=setEmailAddress:) MSOutlookEmailAddress *EmailAddress;

@end