//
//  NetworkRequest.h
//  OpenChat
//
//  Created by Ashish Nigam on 25/09/14.
//  Copyright (c) 2014 Self. All rights reserved.
//


/*
 Class level ToDo
 1: NSRequest which is currently formed inside the class, should not be the case. Reuest formation will be handled by the Developer using this.
 
 2: Consider only Query parameter request formation here, even that is a part of library needs discussion for pros & cons.
 */
#import <Foundation/Foundation.h>

extern BOOL needAsyncDelegate;
extern BOOL needSyncDelegate;
extern BOOL willHandleConnectionDelegate;

// define willHandleConnectionDelegate macro

@protocol ResponseDataDelegate
-(void) notifyResponse:(NSMutableArray *) data Error:(NSError*) error;
@end

@interface NetworkRequestOperation : NSOperation
{
    id <ResponseDataDelegate> responseDataDelegate;
}


@property (nonatomic,readonly) NSString *connectionURL;
@property (nonatomic,assign) id <ResponseDataDelegate>delegate;
@property (nonatomic, strong) NSDictionary * queryParameters;
@property (nonatomic, copy) NSString * HTTPMethod; //GET, POST, PUT, DELETE, UPDATE

- (id)initWithURLString:(NSString*)url delegate:(id)delegate;
@end
