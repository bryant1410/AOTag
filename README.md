#AOTag - simple tag implementation

AOTag is under MIT Licence so if you find it helpful just use it !

###**AOTagDemo**

Is the version I am working on, is much better but still lacking of some features, I hope I can have full version by the end of June or beggining of July 2011.

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

 [1]:http://public.appsido.com/iPhone/public/AOTag/AOTagScreen.pn