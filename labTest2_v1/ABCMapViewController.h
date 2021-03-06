//
//  ABCMapViewController.h
//  labTest_v1
//
//  Created by macadmin on 2014-10-07.
//  Copyright (c) 2014 com.example. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ABCMapViewController : UIViewController<MKMapViewDelegate>

@property (weak, nonatomic) IBOutlet UITextField *setLatitude;

@property (weak, nonatomic) IBOutlet UITextField *setLongtitude;

@property (weak, nonatomic) IBOutlet UITextField *setDescription;

- (IBAction)getLocation:(id)sender;

@property (strong, nonatomic) IBOutlet MKMapView *mapView;

@end
