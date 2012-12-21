//
//  MergeVideo.h
//  VideoPlayRecord
//
//  Created by Abdul Azeem Khan on 5/9/12.
//  Copyright (c) 2012 DataInvent. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <MediaPlayer/MediaPlayer.h>
@interface MergeVideo : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate,MPMediaPickerControllerDelegate>{
    BOOL isSelectingAssetOne;
}
@property(nonatomic,retain)AVAsset* firstAsset;
@property(nonatomic,retain)AVAsset* secondAsset;
@property(nonatomic,retain)AVAsset* audioAsset;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *ActivityView;
- (IBAction)LoadAssetOne:(id)sender;
- (IBAction)LoadAssetTwo:(id)sender;
- (IBAction)LoadAudio:(id)sender;
- (IBAction)MergeAndSave:(id)sender;
- (BOOL) startMediaBrowserFromViewController: (UIViewController*) controller
                               usingDelegate: (id <UIImagePickerControllerDelegate,
                                               UINavigationControllerDelegate>) delegate;
- (void)exportDidFinish:(AVAssetExportSession*)session;

@end
