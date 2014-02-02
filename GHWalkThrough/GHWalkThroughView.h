//
//  GHWalkThroughView.h
//  GHWalkThrough
//
//  Created by Tapasya on 21/01/14.
//  Copyright (c) 2014 Tapasya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GHWalkThroughPageCell.h"

typedef NS_ENUM(NSInteger, GHWalkThroughViewDirection) {
    GHWalkThroughViewDirectionVertical,
    GHWalkThroughViewDirectionHorizontal
};

@protocol GHWalkThroughViewDelegate;
@protocol GHWalkThroughViewDataSource;

@interface GHWalkThroughView : UIView

@property (nonatomic, assign) id<GHWalkThroughViewDelegate> delegate;

@property (nonatomic, assign) id<GHWalkThroughViewDataSource> dataSource;

@property (nonatomic, assign) GHWalkThroughViewDirection walkThroughDirection;

@property (nonatomic, strong) UIView* floatingHeaderView;

@property (nonatomic, assign) BOOL isfixedBackground;

@property (nonatomic, strong) UIImage* bgImage;

@property (nonatomic, copy) NSString *closeTitle;

- (void) showInView:(UIView*) view animateDuration:(CGFloat) duration;

@end

@protocol GHWalkThroughViewDelegate <NSObject>

@optional
- (void)walkthroughDidDismissView:(GHWalkThroughView *)walkthroughView;

@end

@protocol GHWalkThroughViewDataSource <NSObject>

@required

-(NSInteger) numberOfPages;

@optional
//-(UIView*) customViewForPage:(NSInteger) index;
- (UIImage*) bgImageforPage:(NSInteger) index;
-(void) configurePage:(GHWalkThroughPageCell*) cell atIndex:(NSInteger) index;

@end
