//
//  FunWithUIWebViewViewController.h
//  FunWithUIWebView
//
//  Created by Wiley Wimberly on 8/23/11.
//  Copyright 2011 Warm Fuzzy Apps LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FunWithUIWebViewViewController : UIViewController {
    UIWebView *webView;
}

@property (nonatomic, retain) IBOutlet UIWebView *webView;

- (void) processLogger;
- (IBAction)helloFromObjectiveC:(id)sender;
- (void)helloFromJavaScript:(NSString*)msg;

@end
