//
//  AKNoteProperty.h
//  AudioKit
//
//  Created by Aurelius Prochazka on 9/22/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "AKConstant.h"

/** Note properties are properties of an instrument that are defined
 per each note generated by an instrument.
 */

@class AKNote;

@interface AKNoteProperty : AKConstant {
    Float32 currentValue;
}

/// Current value of the property.
@property (nonatomic, assign) Float32 value;

/// Start value for initialization.
@property (nonatomic, assign) float initialValue;

/// Minimum Value allowed.
@property (nonatomic, assign) Float32 minimumValue;

/// Maximum Value allowed.
@property (nonatomic, assign) Float32 maximumValue;

/// Optional pretty name for properties useful for debugging.
@property (nonatomic, strong) NSString *name;

/// Note this property belongs to
@property (nonatomic, strong) AKNote *note;

/// Csound internal reference number
@property (assign) int pValue;


/// Initialize the property with bounds.
/// @param minimumValue Minimum value.
/// @param maximumValue Maximum value.
- (instancetype)initWithMinimumValue:(float)minimumValue
                        maximumValue:(float)maximumValue;

/// Initialize the property with an initial value and bounds.
/// @param initialValue Initial value.
/// @param minimumValue Minimum value.
/// @param maximumValue Maximum value.
- (instancetype)initWithValue:(float)initialValue
                 minimumValue:(float)minimumValue
                 maximumValue:(float)maximumValue;

/// Sets the current value to the initial value.
- (void)reset;

/// Randomize the current value between the minimum and maximum values
- (void)randomize;

+ (id)duration;

@end