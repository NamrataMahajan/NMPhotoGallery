//
//  ViewController.h
//  NMPhotoGallery
//
//  Created by Namrata on 05/11/16.
//  Copyright © 2016 Namrata Mahajan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate,MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)OpenAction:(id)sender;
- (IBAction)OpenPhotoAction:(id)sender;
- (IBAction)MailAction:(id)sender;

@end

