//
//  DetailViewController.h
//  test_ios
//
//  Created by Nenad VULIC on 03/06/15.
//  Copyright (c) 2015 Nenad VULIC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

