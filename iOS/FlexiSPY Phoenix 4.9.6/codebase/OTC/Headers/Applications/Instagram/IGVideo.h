//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSSet, NSURL;

@interface IGVideo : NSObject
{
    long long _videoLength;
    NSNumber *_audioDetected;
    NSURL *_subtitleURL;
    NSSet *_allVideoURLs;
    NSArray *_videoVersions;
    unsigned long long _cachedHash;
    struct CGSize _aspectRatio;
}

+ (struct CGSize)aspectRatioForVideoVersions:(id)arg1;
+ (id)videoInfoDictionaryForVideoVersion:(long long)arg1 fromVideoVersions:(id)arg2;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(retain, nonatomic) NSArray *videoVersions; // @synthesize videoVersions=_videoVersions;
@property(readonly, nonatomic) NSSet *allVideoURLs; // @synthesize allVideoURLs=_allVideoURLs;
@property(readonly, nonatomic) NSURL *subtitleURL; // @synthesize subtitleURL=_subtitleURL;
@property(readonly, nonatomic, getter=isAudioDetected) NSNumber *audioDetected; // @synthesize audioDetected=_audioDetected;
@property(readonly, nonatomic) long long videoLength; // @synthesize videoLength=_videoLength;

- (id)description;
- (id)videoURLForVideoVersion:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithVideoVersions:(id)arg1 videoLength:(long long)arg2 audioDetected:(id)arg3 originalMediaSize:(struct CGSize)arg4 subtitleURL:(id)arg5;
- (id)initWithVideoVersions:(id)arg1 videoLength:(long long)arg2 audioDetected:(id)arg3;
- (id)initWithFeedItemDictionary:(id)arg1;

@end
