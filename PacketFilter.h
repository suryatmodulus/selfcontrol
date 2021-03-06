//
//  PacketFilter.h
//  SelfControl
//
//  Created by Charles Stigler on 6/29/14.
//
//

#import <Foundation/Foundation.h>

@interface PacketFilter : NSObject {
	NSMutableString* rules;
	BOOL isAllowlist;
}

- (PacketFilter*)initAsAllowlist: (BOOL)allowlist;
- (void)addBlockHeader:(NSMutableString*)configText;
- (void)addAllowlistFooter:(NSMutableString*)configText;
- (void)addRuleWithIP:(NSString*)ip port:(int)port maskLen:(int)maskLen;
- (void)writeConfiguration;
- (int)startBlock;
- (int)stopBlock:(BOOL)force;
- (void)addSelfControlConfig;
- (BOOL)containsSelfControlBlock;

@end
