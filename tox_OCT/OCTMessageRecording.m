//
//  OCTMessageRecording.m
//  Pods
//
//  Created by Kihao on 2016/10/12.
//
//

#import "OCTMessageRecording.h"

@interface OCTMessageRecording ()

@end

@implementation OCTMessageRecording

- (NSString *)description
{
    NSString *description = [super description];
    
    const NSUInteger maxSymbols = 3;
    NSString *text = self.recording.length > maxSymbols ? ([self.recording substringToIndex:maxSymbols]) : @"";
    
    return [description stringByAppendingFormat:@"OCTMessageText %@..., length %lu", text, (unsigned long)self.recording.length];
}

@end
