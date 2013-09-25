#AOTag - simple tag implementation

AOTag is under MIT Licence so if you find it helpful just use it !

###**AOTagDemo**

This project add/remove tag with image and title inside a tag list view. When user tap on a tag, it's removed from the view. Please see the sample project for more.

###**Screenshot:**
AOTagDemo in the iphone simulator

![AOTagDemo in the simulator][1]

##How To Use It

Sample project show a simple usage.

###Documentation

```objc
/**
 * Create a new tag object
 *
 * @param tTitle the NSString tag label
 * @param tImage the NSString tag image named
 */
- (void)addTag:(NSString *)tTitle withImage:(NSString *)tImage;

/**
 * Create a new tag object with custom colors
 *
 * @param tTitle the NSString tag label
 * @param tImage the NSString tag image named
 * @param labelColor the UIColor tag label color. Default color is [UIColor whiteColor]
 * @param backgroundColor the UIColor tag background color. Default color is [UIColor colorWithRed:0.204 green:0.588 blue:0.855 alpha:1.000]
 * @param closeColor the UIColor tag close button color. Default color is [UIColor colorWithRed:0.710 green:0.867 blue:0.953 alpha:1.000]
 */
- (void)addTag:(NSString *)tTitle withImage:(NSString *)tImage withLabelColor:(UIColor *)labelColor withBackgroundColor:(UIColor *)backgroundColor withCloseButtonColor:(UIColor *)closeColor;

/**
 * Create a new tags object and add them to the tag list view.
 *
 * @param tags the NSArray tag list to be added. The given tag must be of NSDictionary type (ie. @{@"title": @"Tyrion", @"image": @"tyrion.jpg"})
 */
- (void)addTags:(NSArray *)tags;

/**
 * Remove the given tag from the tag list view
 *
 * @param tag the AOTag instance to be removed
 */
- (void)removeTag:(AOTag *)tag;

/**
 * Remove all tags object
 */
- (void)removeAllTag;
    
```

###Code snippet

```objc
// First add the tag container view in your view controller

- (void)viewDidLoad
{
    [super viewDidLoad];
    
   self.tag = [[AOTagList alloc] initWithFrame:CGRectMake(0.0f,
                                                           50.0f,
                                                           320.0f,
                                                           300.0f)];
    
	[self.view addSubview:self.tag];

	// Then add new tag
	[self.tag addTag:@"my tag title" withImage:@"myTagImage.png"];
}
    
```

```objc
// Add tag with specific label, background and close button color
// If nil, custom color are used

- (void)viewDidLoad
{
    [super viewDidLoad];
    
   self.tag = [[AOTagList alloc] initWithFrame:CGRectMake(0.0f,
                                                           50.0f,
                                                           320.0f,
                                                           300.0f)];
    
	[self.view addSubview:self.tag];

	// Then add new tag
	[self.tag addTag:@"my tag title"
               withImage:[UIImage imageNamed:"myTagImage.png"]
          withLabelColor:[UIColor blackColor]
     withBackgroundColor:[UIColor redColor]
    withCloseButtonColor:[UIColor whiteColor]];
}
    
```

Any comments are welcomed 

@Appsido
contact@appsido.com

 [1]:http://public.appsido.com/iPhone/public/AOTag/AOTagScreen_1.0.png
