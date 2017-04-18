# GHWalkThrough - iOS App Walk through control

![alt tag](https://github.com/GnosisHub/GHWalkThrough/blob/master/wtbgfixed.gif)
![alt tag](https://github.com/GnosisHub/GHWalkThrough/blob/master/wthorizontal.gif)
![alt tag](https://github.com/GnosisHub/GHWalkThrough/blob/master/wtvertical.gif)
![alt tag](https://github.com/GnosisHub/GHWalkThrough/blob/master/wtwithheader.gif)

This is simple and customizable drop-in solution for showing app walkthroughs or intros.

* Configurable to walk through in horizontal and vertical directions
* Support for having custom floating header on all pages
* Supports fixed background image

## How To Use

Sample app contains examples of how to configure the component

* Add `GHWalkThroughView` and `GHWalkThroughPageCell` headers and implementations to your project (4 files total).
* Include with `#import "GHWalkThroughView.h"` to use it wherever you need.
* Set and implement the `GHWalkThroughViewDataSource` to provide data about the pages.

### Sample Code
```objc
// Creating
    GHWalkThroughView* ghView = [[GHWalkThroughView alloc] initWithFrame:self.view.bounds];
	[ghView setDataSource:self];

// Implementing data source methods
(NSInteger) numberOfPages
{
    return 5;
}

- (void) configurePage:(GHWalkThroughPageCell *)cell atIndex:(NSInteger)index
{
    cell.title = @"Some title for page";
    cell.titleImage = [UIImage imageNamed:@"Title Image name"];
    cell.desc = @"Some Description String";
}

- (UIImage*) bgImageforPage:(NSInteger)index
{
    UIImage* image = [UIImage imageNamed:@"bgimage"];
    return image;
}
```

## Credits

For inspiration
- [EAIntroView](https://github.com/ealeksandrov/EAIntroView)
- [ICETutorial](https://github.com/icepat/ICETutorial)



### License :

The MIT License

