//
//  AppDelegate.h
//  Tutorial 1
//
//  Created by Marwan Harb on 8/24/17.
//  Copyright © 2017 Apps & Games. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

