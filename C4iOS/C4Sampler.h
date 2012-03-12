//
//  C4Sampler.h
//  C4iOSDevelopment
//
//  Created by Travis Kirton on 11-10-13.
//  Copyright (c) 2011 mediart. All rights reserved.
//

#import "C4Object.h"
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface C4Sampler : C4Object <AVAudioPlayerDelegate>

-(id)initWithFileNamed:(NSString *)filename;

-(void)play;
-(void)pause;
-(void)stop;
-(void)prepareToPlay;
-(void)endedNormally;
-(void)playAtTime:(CGFloat)time;

@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) CGFloat duration;
@property (readwrite, nonatomic) CGFloat pan;
@property (readwrite, nonatomic) CGFloat volume;
@property (readwrite, nonatomic) CGFloat rate;
@property (readwrite, nonatomic) BOOL enableRate; 
@property (readwrite, nonatomic) CGFloat currentTime;
@property (readonly, nonatomic) CGFloat deviceCurrentTime;
@property (readwrite, nonatomic) BOOL loops;
@property (readwrite, nonatomic) NSInteger numberOfLoops;
=======
@interface C4AudioPlayer : C4Object

-(id)initWithFileNamed:(id)_filename;

-(BOOL)play;
-(void)stop;
-(void)pause;
-(BOOL)prepareToPlay;
//-(BOOL)playAtTime:(NSTimeInterval)time;

@property (readwrite, strong) AVAudioPlayer *player;

@property (readonly, nonatomic, getter=isPlaying) BOOL playing; /* is it playing or not? */
@property (readonly, nonatomic) NSTimeInterval duration; /* the duration of the sound. */

/* set panning. -1.0 is left, 0.0 is center, 1.0 is right. */
@property (nonatomic) CGFloat pan, volume, rate;
@property (nonatomic) BOOL enableRate; 


@property (nonatomic) NSTimeInterval currentTime;
@property (readonly,nonatomic) NSTimeInterval deviceCurrentTime;

@property (nonatomic) NSInteger numberOfLoops;

>>>>>>> origin/master
@end