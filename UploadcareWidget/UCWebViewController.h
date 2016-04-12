//
//  UCWebViewController.h
//  ExampleProject
//
//  Created by Yury Nechaev on 06.04.16.
//  Copyright © 2016 Uploadcare. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UCWebViewController : UIViewController

- (id)initWithURL:(NSURL *)url loadingBlock:(void(^)(NSURL *url))loadingBlock cancelBlock:(void(^)())cancelBlock;

@end
