//
//  MasterViewController.h
//  OpenChat
//
//  Created by Ashish Nigam on 17/09/14.
//  Copyright (c) 2014 Self. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "BaseViewController.h"

#import "NetworkManager.h"


@class IndividualChatViewController;

@interface ContactsListViewController : BaseViewController <NSFetchedResultsControllerDelegate, UICollectionViewDataSource,UICollectionViewDelegate>
{
    BOOL needAsyncDelegate;
    BOOL needSyncDelegate;
    BOOL willHandleConnectionDelegate;
}

@property (strong, nonatomic) IndividualChatViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (weak, nonatomic) IBOutlet UITableView *tableView;


@property (nonatomic, weak) IBOutlet UICollectionView *collectionView;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *editBtn;
@property NSArray *items;

@end