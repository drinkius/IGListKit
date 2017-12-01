/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <IGListKit/IGListAdapterDataSource.h>
#import <IGListKit/IGListAdapterMoveDelegate.h>

#import "IGListTestCase.h"

@interface IGListTestAdapterReorderingDataSource : NSObject <IGListTestCaseDataSource, IGListAdapterMoveDelegate>

// array of numbers which is then passed to -[IGTestReorderableSection setItems:]
@property (nonatomic, strong) NSArray <NSNumber *> *objects;

@property (nonatomic, strong) UIView *backgroundView;

@end
