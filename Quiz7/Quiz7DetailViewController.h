//
//  Quiz7DetailViewController.h
//  Quiz7
//
//  Created by Lewis Cooper on 4/7/14.
//  Copyright (c) 2014 Lewis Cooper. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Task.h"

@interface Quiz7DetailViewController : UIViewController
{
    __weak IBOutlet UILabel *urgencyLabel;
    __weak IBOutlet UISlider *urgencySlider;
}

@property (nonatomic) Task *currentTask;

@property (strong, nonatomic) id detailItem;
- (IBAction)save:(id)sender;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
- (IBAction)urgencySliderChange:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *taskNameTextField;

@property (nonatomic, copy) void (^dismissBlock)(void);


@end
