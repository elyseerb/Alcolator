//
//  ViewController.h
//  Alcolator
//
//  Created by Elyse Erb on 7/3/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UILabel *Labelresult;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;

-(void)buttonPressed:(UIButton *)sender;


@end

