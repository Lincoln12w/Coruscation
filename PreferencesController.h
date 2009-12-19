#import <Cocoa/Cocoa.h>

@interface PreferencesController : NSWindowController {
@private
	NSView *_generalView;
	NSFileManager *_fileManager;
	NSString *_agentApp;
	NSString *_agentIdentifier;
	NSString *_plistPath;
	NSUInteger _selectedAutomaticUpdatesTag;
	NSString *_scheduleDescription;
}

- (IBAction) configureAutomaticUpdates:(id)sender;
- (IBAction) showPrefsPaneForItem:(id) sender;
- (void) updateScheduleDescriptionForIntervalDict:(NSDictionary *)dict;

@property (retain) IBOutlet NSView *generalView;
@property (retain) NSFileManager *fileManager;
@property (copy) NSString *agentApp;
@property (copy) NSString *agentIdentifier;
@property (copy) NSString *plistPath;
@property (assign) NSUInteger selectedAutomaticUpdatesTag;
@property (copy) NSString *scheduleDescription;

@end
