//
//  ViewController.h
//  TestBotonMultiFunciones
//
//  Created by Jose David Bustos H on 19-01-17.
//  Copyright © 2017 Jose David Bustos H. All rights reserved.
//

#import <UIKit/UIKit.h>

//@interface ViewController : UIViewController
@interface ViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>{
    
    IBOutlet UIPickerView *pickerView;
    
    NSMutableArray *arrayColors;
    
}

@property(nonatomic,strong) IBOutlet UIPickerView *pickerView;


@end

