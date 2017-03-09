// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#import <Foundation/Foundation.h>

@interface NBMPeer : NSObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, strong, readonly) NSSet *streams;

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *profilePicURL;
@property (nonatomic, strong) NSString *country;
@property (nonatomic, strong) NSString *town;
@property (nonatomic, strong) NSString *age;
@property (nonatomic, strong) NSArray* emojis;
@property (nonatomic, strong) NSNumber* timeout;
@property (nonatomic, strong) NSNumber* ban;

- (instancetype)initWithId:(NSString *)peerId;

- (instancetype)initWithId:(NSString *)peerId firstName:(NSString*)peerFirstName profileURL:(NSString*)peerProfileURL country:(NSString*)peerCountry town:(NSString*)peerTown age:(NSString*)peerAge emojis:(NSArray*)emojis;

- (void)addStream:(NSString *)streamId;
- (void)removeStream:(NSString *)streamId;

- (BOOL)hasStream:(NSString *)streamId;

@end
