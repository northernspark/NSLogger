//
//  GDLogger.h
//  Grado Logger https://gradoapp.com
//
//  Created by Joe Barbour on 21/04/2015.
//  Copyright (c) 2015 NorthernSpark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GDLogger : NSObject

-(void)log:(NSString *)title properties:(NSDictionary *)properties error:(BOOL)error;

-(NSURL *)logDirectory;
-(NSArray *)logFiles:(BOOL)directory;
-(NSString *)logPrint;
-(NSData *)logData;
-(void)logDestory;

@property (nonatomic) BOOL degbugger;
@property (nonatomic) NSString *filename;

@end
