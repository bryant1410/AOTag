#AOTag - simple tag implementation

AOTag is under MIT Licence so if you find it helpful just use it !

###**AOTagDemo**

This project add/remove tag with image and title inside a tag list view. When user tap on a tag, it's removed from the view. Please see the sample project for more.

###**Screenshot:**
AOTagDemo in the iphone simulator

![AOTagDemo in the simulator][1]

##How To Use It

Sample project show a simple usage.

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
	[self.tag addTag:@"my tag title" withImage:[UIImage imageNamed:"myTagImage.png"]];
}
    
```

Any comments are welcomed 

@Appsido
contact@appsido.com

 [1]:http://public.appsido.com/iPhone/public/AOTag/AOTagScreen.png
