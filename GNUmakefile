#
# GNUmakefile - Generated by ProjectCenter
#
ifeq ($(GNUSTEP_MAKEFILES),)
 GNUSTEP_MAKEFILES := $(shell gnustep-config --variable=GNUSTEP_MAKEFILES 2>/dev/null)
  ifeq ($(GNUSTEP_MAKEFILES),)
    $(warning )
    $(warning Unable to obtain GNUSTEP_MAKEFILES setting from gnustep-config!)
    $(warning Perhaps gnustep-make is not properly installed,)
    $(warning so gnustep-config is not in your PATH.)
    $(warning )
    $(warning Your PATH is currently $(PATH))
    $(warning )
  endif
endif
ifeq ($(GNUSTEP_MAKEFILES),)
 $(error You need to set GNUSTEP_MAKEFILES before compiling!)
endif

include $(GNUSTEP_MAKEFILES)/common.make

#
# Application
#
VERSION = 1.3.13
PACKAGE_NAME = TimeTracker
APP_NAME = TimeTracker
TimeTracker_APPLICATION_ICON = 


#
# Resource files
#
TimeTracker_RESOURCE_FILES = \
    English.lproj/MainMenu.xib \
    English.lproj/TaskEditor.xib \
    Graphics/*.png \
    TimeTrackerInfo.plist

TimeTracker_HEADER_FILES = \
CaseInsensitivePredicateTemplate.h \
DatePredicateTemplate.h \
MainController.h \
PreferencesController.h \
RSRTVArrayController.h \
StartTaskMenuDelegate.h \
TaskEditorController.h \
TTaskMover.h \
TTaskNameTransformer.h \
TTParsedPredicate.h \
TTPredicateEditorViewController.h \
TTQueryController.h \
WeekdayPredicateTemplate.h \
WorkPeriodMainPredicateTemplate.h \
IProject.h \
ITask.h \
SearchQuery.h \
TDateTransformer.h \
TimeIntervalFormatter.h \
TMetaProject.h \
TMetaTask.h \
TProject.h \
TTask.h \
TTTimeProvider.h \
TWorkPeriod.h

TimeTracker_OBJC_FILES = \
CaseInsensitivePredicateTemplate.m \
DatePredicateTemplate.m \
MainController.m \
PreferencesController.m \
RSRTVArrayController.m \
StartTaskMenuDelegate.m \
TaskEditorController.m \
TTaskMover.m \
TTaskNameTransformer.m \
TTParsedPredicate.m \
TTPredicateEditorViewController.m \
TTQueryController.m \
WeekdayPredicateTemplate.m \
WorkPeriodMainPredicateTemplate.m \
SearchQuery.m \
TDateTransformer.m \
TimeIntervalFormatter.m \
TMetaProject.m \
TMetaTask.m \
TProject.m \
TTask.m \
TTTimeProvider.m \
TWorkPeriod.m

#
# Other sources
#
TimeTracker_OBJC_FILES += \
main.m 

#
# Makefiles
#
include $(GNUSTEP_MAKEFILES)/aggregate.make
include $(GNUSTEP_MAKEFILES)/application.make
