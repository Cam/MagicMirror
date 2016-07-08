//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "BCPopoverContentController.h"
#import "NSSharingServicePickerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class MSIOSConnectionController, NSButton, NSString, NSTableView, NSTextField, NSView;

@interface MSIOSConnectClientsViewController : NSViewController <BCPopoverContentController, NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate, NSSharingServicePickerDelegate>
{
    NSTextField *_ipTextField;
    NSButton *_ipConnectButton;
    NSTextField *_titleTextField;
    NSTextField *_subTitleTextField;
    NSButton *_shareButton;
    NSView *_ipFieldBorderView;
    MSIOSConnectionController *_connectionController;
    NSTableView *_tableView;
    NSString *_subnetAddress;
}


- (void)awakeFromNib;
- (void)calculateSubnet;
- (void)clientsChangedNotification:(id)arg1;
- (void)connectToIP:(id)arg1;
@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (void)dealloc;
- (id)initWithConnectionController:(id)arg1;
@property(retain, nonatomic) NSButton *ipConnectButton; // @synthesize ipConnectButton=_ipConnectButton;
@property(retain, nonatomic) NSView *ipFieldBorderView; // @synthesize ipFieldBorderView=_ipFieldBorderView;
@property(retain, nonatomic) NSTextField *ipTextField; // @synthesize ipTextField=_ipTextField;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)openMirrorWebsite:(id)arg1;
- (void)prefillIP;
- (void)selectionChanged:(id)arg1;
@property(retain, nonatomic) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSTextField *subTitleTextField; // @synthesize subTitleTextField=_subTitleTextField;
@property(retain, nonatomic) NSString *subnetAddress; // @synthesize subnetAddress=_subnetAddress;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
