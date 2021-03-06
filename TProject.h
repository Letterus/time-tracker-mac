//
//  TProject.h
//  Time Tracker
//
//  Created by Ivan Dramaliev on 10/18/05.
//  Copyright 2005 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TTask.h"
#import "IProject.h"

@interface TProject : NSObject <NSCoding, IProject> {
	NSString *_name;
	NSMutableArray *_tasks;
	int _totalTime;
	BOOL _closed;
}

- (NSMutableArray *) tasks;
- (void) addTask: (TTask *) task;

- (NSMutableArray *) matchingTasks:(NSPredicate*) filter;
- (NSInteger) filteredTime:(NSPredicate*) filter;
- (NSInteger) filteredTime:(NSPredicate*) filter closed:(BOOL) closed;
- (NSString*) findUniqueTaskNameBasedOn:(NSString*) baseName;
- (BOOL) doesTaskNameExist:(NSString*)name;

- (NSInteger) totalTime;
- (void) updateTotalTime;
- (NSString*) serializeData:(NSString*)separatorChar;
- (id<IProject>) removeTask:(TTask*)task;

@property(retain,nonatomic) NSString *name;
@property(readonly) NSInteger closedTime;
@property BOOL closed;

- (void) deDuplicateTaskNames;
@end
