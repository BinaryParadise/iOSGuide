//
//  NLWeiboTableViewCell.h
//  Neverland
//
//  Created by Rake Yang on 2019/11/1.
//  Copyright © 2019 BinaryParadise. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <NLUIComponent/NLUIComponent.h>
#import "NLWBStatusViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface NLWeiboTableViewCell : UITableViewCell

@property (nonatomic, strong) NLFWBStatus *status;

- (void)fillWithViewModel:(NLWBStatusViewModel *)viewModel;

@end

NS_ASSUME_NONNULL_END
