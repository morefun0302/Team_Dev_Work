//
//  AppDelegate.h
//  LoveNetwork
//
//  Created by Ashish Nigam on 10/23/13.
//  Copyright (c) 2013 OneZeroOne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic) BOOL showGenderConfirmation;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

#define appDelegate ((AppDelegate *) [UIApplication sharedApplication].delegate)