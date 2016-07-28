//
//  NAudioConvertManager.h
//  NearCameraManager
//
//  Created by NearKong on 16/7/22.
//  Copyright © 2016年 NearKong. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NCameraManagerHeader.h"

typedef void (^NAudioConvertResultBlock)(NCameraManagerResult result, NSString *toFullPath, NSError *error);

@interface NAudioConvertManager : NSObject

+ (NAudioConvertManager *)shareInstance;
- (void)convertAudioFromFullPath:(NSString *)fromFullPath
                      toFileName:(NSString *)toFileName
              isSaveOriginalFile:(BOOL)isSave
                           block:(NAudioConvertResultBlock)block;

@end
