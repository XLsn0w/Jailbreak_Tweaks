//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IUiUtilExt-Protocol.h"

@class NSString;
@protocol WACameraQRCodeScannerDelegate;

@interface WACameraScanScanner : NSObject <IUiUtilExt>
{
    char *_sendImage;
    basic_string_a490aa4c _decodeData;
    basic_string_a490aa4c _decodeType;
    basic_string_a490aa4c _decodeCharset;
    struct QBAR_REPORT_MSG _reportMsg;
    struct QBar *_qbar;
    unsigned int _scanIndex;
    id <WACameraQRCodeScannerDelegate> _delegate;
    NSString *_resultData;
    NSString *_resultType;
    double _scanFreq;
    double _lastScanTime;
    struct CGRect _cropRegion;
    struct CGRect _scanRegion;
}

@property(nonatomic) double lastScanTime; // @synthesize lastScanTime=_lastScanTime;
@property(nonatomic) unsigned int scanIndex; // @synthesize scanIndex=_scanIndex;
@property(nonatomic) double scanFreq; // @synthesize scanFreq=_scanFreq;
@property(nonatomic) struct CGRect scanRegion; // @synthesize scanRegion=_scanRegion;
@property(nonatomic) struct CGRect cropRegion; // @synthesize cropRegion=_cropRegion;
@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *resultData; // @synthesize resultData=_resultData;
@property(nonatomic) __weak id <WACameraQRCodeScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)notifyGotBarcode:(id)arg1;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (_Bool)doScanCode:(char *)arg1 Width:(int)arg2 Height:(int)arg3;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithDelegate:(id)arg1 CodeType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

