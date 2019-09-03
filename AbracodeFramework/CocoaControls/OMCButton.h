/*
	OMCButton.h
*/

#import <Cocoa/Cocoa.h>

IB_DESIGNABLE
@interface OMCButton : NSButton <NSDraggingDestination>
{
}

@property (nonatomic, retain) IBInspectable NSString * commandID;
@property (nonatomic, retain) IBInspectable NSString * mappedOnValue;
@property (nonatomic, retain) IBInspectable NSString * mappedOffValue;
@property (nonatomic, retain) IBInspectable NSString * escapingMode;
@property (nonatomic) BOOL IBInspectable acceptFileDrop;
@property (nonatomic) BOOL IBInspectable acceptTextDrop;
@property (nonatomic, retain) id droppedItems; //could be NSArray * for list of files or NSString * for text

@end

