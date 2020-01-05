//
//  TMetaProject.h
//  Time Tracker
//
//  Created by Rainer Burgstaller on 25.11.07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import "TProject.h"
#import "IProject.h"

@interface TMetaProject : NSObject<IProject> {
	NSMutableArray *_projects;
}

- (int) totalTime;
- (void) updateTotalTime;
- (NSArray *) tasks;
- (void) setProjects:(NSMutableArray*) projects;
- (NSString*) name;
- (int) filteredTime:(NSPredicate*) filter;
- (NSArray *) matchingTasks:(NSPredicate*) filter;

@end
