//
//  BarCodeScannerView.h
//  Punchh Framework
//
//  Created by Sharad Shankar on 30/09/12.
//  Copyright (c) 2013 Punchh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BarCodeScannerView : UIView
- (instancetype) initWithFrame:(CGRect)frame
                    withScannerAction:(void(^)(NSInteger scannerButtonIndex))block;
-(void)translateDown;

@end
