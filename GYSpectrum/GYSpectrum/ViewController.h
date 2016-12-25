//
//  ViewController.h
//  GYSpectrum
//
//  Created by LiQiu Yu on 16/5/19.
//  Copyright © 2016年 LiQiu Yu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpectrumView.h"
#import <AVFoundation/AVAudioRecorder.h>
#import <AVFoundation/AVAudioSession.h>
#import <CoreAudio/CoreAudioTypes.h>

@interface ViewController : UIViewController<AVAudioRecorderDelegate>

@property (nonatomic,strong) AVAudioRecorder *audioRecorder;//音频录音机

@end

