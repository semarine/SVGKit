/**
 * http://www.w3.org/TR/SVG/types.html#InterfaceSVGFitToViewBox
 
 interface SVGFitToViewBox {
 readonly attribute SVGAnimatedRect viewBox;
 readonly attribute SVGAnimatedPreserveAspectRatio preserveAspectRatio;
 */

#import <Foundation/Foundation.h>

#import <QuartzCore/QuartzCore.h>

@protocol SVGFitToViewBox <NSObject>

@property (nonatomic) /* SVGAnimatedRect */ CGRect viewBox;

@end
