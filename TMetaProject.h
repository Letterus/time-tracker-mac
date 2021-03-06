//
//  TMetaProject.h
//  Time Tracker
//
//  Created by Rainer Burgstaller on 25.11.07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TProject.h"
#import "IProject.h"

@interface TMetaProject : NSObject<IProject> {
	NSMutableArray *_projects;
}

- (NSInteger) totalTime;
- (void) updateTotalTime;
- (NSArray *) tasks;
- (void) setProjects:(NSMutableArray*) projects;
- (NSString*) name;
- (NSInteger) filteredTime:(NSPredicate*) filter;
- (NSArray *) matchingTasks:(NSPredicate*) filter;

@end
