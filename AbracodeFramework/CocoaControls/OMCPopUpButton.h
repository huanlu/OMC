/*
	OMCPopUpButton.h
*/

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface OMCPopUpButton : NSPopUpButton
{
}

@property (nonatomic, retain) IBInspectable NSString * commandID;

//no setter, gets value from currently selected menu item
- (NSString *)escapingMode;

@end

