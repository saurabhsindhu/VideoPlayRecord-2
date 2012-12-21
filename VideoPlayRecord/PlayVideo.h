//
//  PlayVideo.h
//  VideoPlayRecord
//
//  Created by Abdul Azeem Khan on 5/9/12.
//  Copyright (c) 2012 DataInvent. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <MediaPlayer/MediaPlayer.h>
@interface PlayVideo : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate>

//Button Backend Function
- (IBAction)PlayVideo:(id)sender;

//For Opening UIImagePickerController
- (BOOL) startMediaBrowserFromViewController: (UIViewController*) controller
                               usingDelegate: (id <UIImagePickerControllerDelegate,
                                               UINavigationControllerDelegate>) delegate;

@end
