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

#import "MSOutlookModels.h"

/**
* The implementation file for type MSOutlookContact.
*/

@implementation MSOutlookContact	

@synthesize odataType = _odataType;
@synthesize ParentFolderId = _ParentFolderId;
@synthesize Birthday = _Birthday;
@synthesize FileAs = _FileAs;
@synthesize DisplayName = _DisplayName;
@synthesize GivenName = _GivenName;
@synthesize Initials = _Initials;
@synthesize MiddleName = _MiddleName;
@synthesize NickName = _NickName;
@synthesize Surname = _Surname;
@synthesize Title = _Title;
@synthesize Generation = _Generation;
@synthesize EmailAddresses = _EmailAddresses;
@synthesize ImAddresses = _ImAddresses;
@synthesize JobTitle = _JobTitle;
@synthesize CompanyName = _CompanyName;
@synthesize Department = _Department;
@synthesize OfficeLocation = _OfficeLocation;
@synthesize Profession = _Profession;
@synthesize BusinessHomePage = _BusinessHomePage;
@synthesize AssistantName = _AssistantName;
@synthesize Manager = _Manager;
@synthesize HomePhones = _HomePhones;
@synthesize BusinessPhones = _BusinessPhones;
@synthesize MobilePhone1 = _MobilePhone1;
@synthesize HomeAddress = _HomeAddress;
@synthesize BusinessAddress = _BusinessAddress;
@synthesize OtherAddress = _OtherAddress;
@synthesize YomiCompanyName = _YomiCompanyName;
@synthesize YomiGivenName = _YomiGivenName;
@synthesize YomiSurname = _YomiSurname;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OutlookServices.Contact";
    }

	return self;
}

@end