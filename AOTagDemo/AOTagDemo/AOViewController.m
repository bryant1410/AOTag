//
//  AOViewController.m
//  AOTagDemo
//
//  Created by Loïc GRIFFIE on 24/09/13.
//  Copyright (c) 2013 Appsido. All rights reserved.
//

#import "AOViewController.h"
#import "AOTag.h"

@interface AOViewController ()

@property (retain) AOTagList *tag;
@property (retain) NSMutableArray *randomTag;

@end

@implementation AOViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self resetRandomTagsName];
    
    self.tag = [[AOTagList alloc] initWithFrame:CGRectMake(0.0f,
                                                           50.0f,
                                                           320.0f,
                                                           300.0f)];
    
    [self.view addSubview:self.tag];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)resetRandomTagsName
{
    [self.tag removeAllTag];
    
    self.randomTag = [NSMutableArray arrayWithArray:@[@{@"title": @"Tyrion", @"image": @"tyrion.jpg"}, @{@"title": @"Jaime", @"image": @"jaime.jpg"}, @{@"title": @"Robert", @"image": @"robert.jpg"}, @{@"title": @"Sansa", @"image": @"sansa.jpg"}, @{@"title": @"Arya", @"image": @"arya.jpg"}, @{@"title": @"Jon", @"image": @"john.jpg"}, @{@"title": @"Catelyn", @"image": @"catherine.jpg"}, @{@"title": @"Cersei", @"image": @"cersei.jpg"}]];
}

- (IBAction)addRandomTag:(id)sender
{
    if ([self.randomTag count])
    {
        NSInteger index = arc4random() % [self.randomTag count];
        
        [self.tag addTag:[[self.randomTag objectAtIndex:index] valueForKey:@"title"] withImage:[[self.randomTag objectAtIndex:index] valueForKey:@"image"]];
        [self.randomTag removeObjectAtIndex:index];
    }
    else
    {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Information"
                                                        message:@"No more random data to be used !"
                                                       delegate:self
                                              cancelButtonTitle:@"Reset"
                                              otherButtonTitles:nil];
        [alert show];
    }
    
}

- (IBAction)addAllTag:(id)sender
{
    [self resetRandomTagsName];
    
    [self.tag addTags:self.randomTag];
    
    [self.randomTag removeAllObjects];
}

- (IBAction)removeAllTag:(id)sender
{
    [self resetRandomTagsName];
}

- (void)alertView:(UIAlertView *)alertView willDismissWithButtonIndex:(NSInteger)buttonIndex
{
    [self resetRandomTagsName];
}

@end
