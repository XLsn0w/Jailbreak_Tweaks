//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class FTSWebSearchMgr, NSMutableArray, NSMutableDictionary, NSString, WSVideoModel, WSVideoTagInfo;
@protocol WSVideoFlowDataDelegate;

@interface WSVideoFlowDataLogic : NSObject <PBMessageObserverDelegate>
{
    _Bool _isWorking;
    _Bool _isFakeInitVideo;
    _Bool _bDisplayNoInitVideo;
    _Bool _isSingleVideoPlay;
    int _cgiStatus;
    NSString *_searchId;
    NSString *_sessionId;
    unsigned int _category;
    NSMutableDictionary *_dicRequestingUrlVideo;
    long long _lastPlayingVideoIndex;
    NSMutableDictionary *_dicCachedPlayTime;
    NSMutableDictionary *_dicExposeVideoInfo;
    unsigned int _maxCgiExposedReportCount;
    unsigned int _maxCgiExposedReportIntervalInMinute;
    NSMutableDictionary *_dicOperateVideo;
    NSMutableDictionary *_dicRequestingExposeInfo;
    WSVideoModel *_lastPlayVideoModel;
    unsigned int _browseBeginTime;
    _Bool _isEnablePrefetch;
    _Bool _isHomepage;
    unsigned int _offset;
    unsigned int _scene;
    id <WSVideoFlowDataDelegate> _delegate;
    FTSWebSearchMgr *_webSearchMgr;
    NSMutableArray *_arrVideoModel;
    NSMutableDictionary *_dicVideoModel;
    WSVideoModel *_defaultVideo;
    WSVideoTagInfo *_defaultVideoTagInfo;
    long long _lastExposedIndex;
    NSString *_reqQuery;
    long long _blockType;
    long long _resultType;
    WSVideoTagInfo *_defaultTagInfo;
}

@property(retain, nonatomic) WSVideoTagInfo *defaultTagInfo; // @synthesize defaultTagInfo=_defaultTagInfo;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(nonatomic) long long blockType; // @synthesize blockType=_blockType;
@property(retain, nonatomic) NSString *reqQuery; // @synthesize reqQuery=_reqQuery;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isHomepage; // @synthesize isHomepage=_isHomepage;
@property(nonatomic) long long lastExposedIndex; // @synthesize lastExposedIndex=_lastExposedIndex;
@property(readonly, nonatomic) _Bool isEnablePrefetch; // @synthesize isEnablePrefetch=_isEnablePrefetch;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) WSVideoTagInfo *defaultVideoTagInfo; // @synthesize defaultVideoTagInfo=_defaultVideoTagInfo;
@property(readonly, nonatomic) WSVideoModel *defaultVideo; // @synthesize defaultVideo=_defaultVideo;
@property(readonly, nonatomic) NSMutableDictionary *dicVideoModel; // @synthesize dicVideoModel=_dicVideoModel;
@property(readonly, nonatomic) NSMutableArray *arrVideoModel; // @synthesize arrVideoModel=_arrVideoModel;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(nonatomic) __weak id <WSVideoFlowDataDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned int)getCachedVideoPlayTime:(id)arg1;
- (void)cacheVideoPlayTime:(unsigned int)arg1 forVideo:(id)arg2;
- (void)reportVideoClickWithRealSharer:(id)arg1 andSession:(id)arg2 andScene:(unsigned int)arg3;
- (void)reportSuccessShare:(id)arg1 types:(id)arg2 users:(id)arg3;
- (void)reportBrowseInfo;
- (void)markBeginBrowse;
- (void)updateExposeTimeForVideo:(id)arg1;
- (id)generateClientRequestingExposeInfo;
- (id)getLatestRequestingExposeInfo;
- (void)cleanOutOfDateRequestingExposeInfo;
- (_Bool)isRequestingExposeInfoOutOfDate:(id)arg1;
- (void)markOperateVideo:(id)arg1;
- (void)reportFeedBackClick:(id)arg1 videoOffset:(unsigned int)arg2 arrReasons:(id)arg3;
- (void)reportVideoPlay:(id)arg1;
- (void)reportItemClick:(id)arg1 clickType:(int)arg2 extObj:(id)arg3;
- (void)reportItemClick:(id)arg1 clickType:(int)arg2;
- (void)reportExposeBatchVideoIfNeeded;
- (void)sendRealTimeExposeReport:(id)arg1;
- (void)sendRealTimeCgiReport:(id)arg1;
- (void)finishUrlRequestingForVideo:(id)arg1;
- (void)notifyModel:(id)arg1;
- (void)internalRequestVideoInfoFor:(id)arg1;
- (void)tryAsyncGetVideoInfoFor:(id)arg1;
- (void)mergeVideosAndFetchVideoUrl:(id)arg1;
- (void)appendPageForJson:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getHttpVideoDownloadInfoAtIndex:(long long)arg1;
- (void)updatePreloadVideoByCurrentIndex:(long long)arg1;
- (unsigned int)getValidRequestingExposeDuration;
- (unsigned int)getValidMaxRequestingExposeCount;
- (unsigned int)getValidScene;
- (id)findKvItemByKey:(id)arg1 array:(id)arg2;
- (_Bool)canSingleVideoPlay;
- (void)prepareSingleVideoPlay;
- (void)asyncGetWebRecommendVideo;
- (id)genInitParams;
- (void)parseInitParams:(id)arg1;
- (_Bool)hasReachEnd;
- (void)commonInit;
- (void)dealloc;
- (id)initWithDefaultVideo:(id)arg1 defaultTagInfo:(id)arg2 isFakeInitVideo:(_Bool)arg3 displayNoInitVideo:(_Bool)arg4;

@end

