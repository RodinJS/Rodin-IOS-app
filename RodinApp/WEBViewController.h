//
//  WEBViewController.h
//  RodinApp
//
//  Created by Gor on 1/10/17.
//  Copyright © 2017 Rodin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WEBViewController : UIViewController <UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webPage;

@end
