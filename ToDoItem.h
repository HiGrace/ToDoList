//
//  ToDoItem.h
//  ToDoList
//
//  Created by Grace on 3/7/15.
//  Copyright (c) 2015 Grace Liu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSData * creationDate;

@end
