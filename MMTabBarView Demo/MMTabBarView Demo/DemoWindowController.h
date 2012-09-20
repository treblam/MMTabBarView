//
//  WindowController.h
//  MMTabBarView Demo
//
//  Created by John Pannell on 4/6/06.
//  Copyright 2006 Positive Spin Media. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class MMTabBarView;

@interface DemoWindowController : NSWindowController <NSToolbarDelegate> {
	IBOutlet NSTabView				*tabView;
	IBOutlet NSTextField            *tabField;
	IBOutlet NSDrawer				*drawer;

	IBOutlet MMTabBarView           *tabBar;

	IBOutlet NSButton               *isProcessingButton;
	IBOutlet NSButton				*isEditedButton;
	IBOutlet NSButton				*hasLargeImageButton;
	IBOutlet NSTextField			*objectCounterField;
	IBOutlet NSPopUpButton			*iconButton;
    IBOutlet NSButton				*hasCloserButton;

	IBOutlet NSPopUpButton			*popUp_style;
	IBOutlet NSPopUpButton			*popUp_orientation;
	IBOutlet NSPopUpButton			*popUp_tearOff;
	IBOutlet NSButton               *button_onlyShowCloseOnHover;    
	IBOutlet NSButton				*button_canCloseOnlyTab;
	IBOutlet NSButton				*button_disableTabClosing;
    IBOutlet NSButton               *button_allowBackgroundClosing;
	IBOutlet NSButton				*button_hideForSingleTab;
	IBOutlet NSButton				*button_showAddTab;
	IBOutlet NSButton				*button_useOverflow;
	IBOutlet NSButton				*button_automaticallyAnimate;
	IBOutlet NSButton				*button_allowScrubbing;
	IBOutlet NSButton				*button_sizeToFit;
	IBOutlet NSTextField			*textField_minWidth;
	IBOutlet NSTextField			*textField_maxWidth;
	IBOutlet NSTextField			*textField_optimumWidth;
}

- (void)addDefaultTabs;

// UI
- (IBAction)addNewTab:(id)sender;
- (IBAction)closeTab:(id)sender;
- (IBAction)setIconNamed:(id)sender;
- (IBAction)setObjectCount:(id)sender;
- (IBAction)setTabLabel:(id)sender;

// Actions
- (IBAction)isProcessingAction:(id)sender;
- (IBAction)isEditedAction:(id)sender;
- (IBAction)hasCloseButtonAction:(id)sender;
- (IBAction)hasLargeImageAction:(id)sender;

- (MMTabBarView *)tabBar;

// delegate
- (void)tabView:(NSTabView *)aTabView didSelectTabViewItem:(NSTabViewItem *)tabViewItem;
- (BOOL)tabView:(NSTabView *)aTabView shouldCloseTabViewItem:(NSTabViewItem *)tabViewItem;
- (void)tabView:(NSTabView *)aTabView didCloseTabViewItem:(NSTabViewItem *)tabViewItem;

// toolbar
- (NSToolbarItem *)toolbar:(NSToolbar *)toolbar itemForItemIdentifier:(NSString *)itemIdentifier willBeInsertedIntoToolbar:(BOOL)flag;
- (NSArray *)toolbarDefaultItemIdentifiers:(NSToolbar*)toolbar;
- (NSArray *)toolbarAllowedItemIdentifiers:(NSToolbar*)toolbar;
- (IBAction)toggleToolbar:(id)sender;
- (BOOL)validateToolbarItem:(NSToolbarItem *)theItem;

@end
