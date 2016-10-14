//
//  OCTMessageRecording.h
//  Pods
//
//  Created by Kihao on 2016/10/12.
//
//

#import "OCTObject.h"
#import "OCTToxConstants.h"

@class OCTToxConstants;

@interface OCTMessageRecording : OCTObject
@property (nullable) NSString *recording;
@property (nonatomic, assign) float time;
/**
 * Indicate if message is delivered. Actual only for outgoing messages.
 */
@property BOOL isDelivered;
@property  NSTimeInterval callDuration;

/**
 * Type of the message.
 */
@property OCTToxMessageType type;

@property OCTToxMessageId messageId;

@end

RLM_ARRAY_TYPE(OCTMessageRecording)


