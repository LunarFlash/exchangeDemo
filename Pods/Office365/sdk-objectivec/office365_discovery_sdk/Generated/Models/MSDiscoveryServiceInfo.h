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

#import <Foundation/Foundation.h>
#import "MSDiscoveryProtocols.h"


/**
* The header for type ServiceInfo.
*/

@interface MSDiscoveryServiceInfo : NSObject

@property (retain, nonatomic, readonly) NSString *odataType;
@property (retain, nonatomic, readwrite, getter=capability, setter=setCapability:) NSString *capability;
@property (retain, nonatomic, readwrite, getter=entityKey, setter=setEntityKey:) NSString *entityKey;
@property (retain, nonatomic, readwrite, getter=providerId, setter=setProviderId:) NSString *providerId;
@property (retain, nonatomic, readwrite, getter=providerName, setter=setProviderName:) NSString *providerName;
@property (nonatomic, getter=serviceAccountType, setter=setServiceAccountType:) int serviceAccountType;
@property (retain, nonatomic, readwrite, getter=serviceApiVersion, setter=setServiceApiVersion:) NSString *serviceApiVersion;
@property (retain, nonatomic, readwrite, getter=serviceEndpointUri, setter=setServiceEndpointUri:) NSString *serviceEndpointUri;
@property (retain, nonatomic, readwrite, getter=serviceId, setter=setServiceId:) NSString *serviceId;
@property (retain, nonatomic, readwrite, getter=serviceName, setter=setServiceName:) NSString *serviceName;
@property (retain, nonatomic, readwrite, getter=serviceResourceId, setter=setServiceResourceId:) NSString *serviceResourceId;

@end