/**
 * Copyright (c) 2000-2013 Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

#import <Foundation/Foundation.h>
#import "BaseService.h"

/**
 * author Bruno Farache
 */
@interface LRPasswordPolicyService_v62 : BaseService

- (NSDictionary *)addPasswordPolicyWithName:(NSString *)name description:(NSString *)description changeable:(BOOL)changeable changeRequired:(BOOL)changeRequired minAge:(long)minAge checkSyntax:(BOOL)checkSyntax allowDictionaryWords:(BOOL)allowDictionaryWords minAlphanumeric:(int)minAlphanumeric minLength:(int)minLength minLowerCase:(int)minLowerCase minNumbers:(int)minNumbers minSymbols:(int)minSymbols minUpperCase:(int)minUpperCase history:(BOOL)history historyCount:(int)historyCount expireable:(BOOL)expireable maxAge:(long)maxAge warningTime:(long)warningTime graceLimit:(int)graceLimit lockout:(BOOL)lockout maxFailure:(int)maxFailure lockoutDuration:(long)lockoutDuration resetFailureCount:(long)resetFailureCount resetTicketMaxAge:(long)resetTicketMaxAge error:(NSError **)error;
- (NSDictionary *)addPasswordPolicyWithName:(NSString *)name description:(NSString *)description changeable:(BOOL)changeable changeRequired:(BOOL)changeRequired minAge:(long)minAge checkSyntax:(BOOL)checkSyntax allowDictionaryWords:(BOOL)allowDictionaryWords minAlphanumeric:(int)minAlphanumeric minLength:(int)minLength minLowerCase:(int)minLowerCase minNumbers:(int)minNumbers minSymbols:(int)minSymbols minUpperCase:(int)minUpperCase regex:(NSString *)regex history:(BOOL)history historyCount:(int)historyCount expireable:(BOOL)expireable maxAge:(long)maxAge warningTime:(long)warningTime graceLimit:(int)graceLimit lockout:(BOOL)lockout maxFailure:(int)maxFailure lockoutDuration:(long)lockoutDuration resetFailureCount:(long)resetFailureCount resetTicketMaxAge:(long)resetTicketMaxAge serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (void)deletePasswordPolicyWithPasswordPolicyId:(long)passwordPolicyId error:(NSError **)error;
- (NSDictionary *)updatePasswordPolicyWithPasswordPolicyId:(long)passwordPolicyId name:(NSString *)name description:(NSString *)description changeable:(BOOL)changeable changeRequired:(BOOL)changeRequired minAge:(long)minAge checkSyntax:(BOOL)checkSyntax allowDictionaryWords:(BOOL)allowDictionaryWords minAlphanumeric:(int)minAlphanumeric minLength:(int)minLength minLowerCase:(int)minLowerCase minNumbers:(int)minNumbers minSymbols:(int)minSymbols minUpperCase:(int)minUpperCase history:(BOOL)history historyCount:(int)historyCount expireable:(BOOL)expireable maxAge:(long)maxAge warningTime:(long)warningTime graceLimit:(int)graceLimit lockout:(BOOL)lockout maxFailure:(int)maxFailure lockoutDuration:(long)lockoutDuration resetFailureCount:(long)resetFailureCount resetTicketMaxAge:(long)resetTicketMaxAge error:(NSError **)error;
- (NSDictionary *)updatePasswordPolicyWithPasswordPolicyId:(long)passwordPolicyId name:(NSString *)name description:(NSString *)description changeable:(BOOL)changeable changeRequired:(BOOL)changeRequired minAge:(long)minAge checkSyntax:(BOOL)checkSyntax allowDictionaryWords:(BOOL)allowDictionaryWords minAlphanumeric:(int)minAlphanumeric minLength:(int)minLength minLowerCase:(int)minLowerCase minNumbers:(int)minNumbers minSymbols:(int)minSymbols minUpperCase:(int)minUpperCase regex:(NSString *)regex history:(BOOL)history historyCount:(int)historyCount expireable:(BOOL)expireable maxAge:(long)maxAge warningTime:(long)warningTime graceLimit:(int)graceLimit lockout:(BOOL)lockout maxFailure:(int)maxFailure lockoutDuration:(long)lockoutDuration resetFailureCount:(long)resetFailureCount resetTicketMaxAge:(long)resetTicketMaxAge serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;

@end