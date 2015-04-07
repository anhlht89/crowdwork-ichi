//
//  YouTubeAPILibs.h
//  YouTube Direct Lite for iOS
//
//  Created by lehoang on 4/7/15.
//  Copyright (c) 2015 Google. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GTLYouTube.h"
#import "VideoData.h"
#import <MobileCoreServices/MobileCoreServices.h>

@interface YouTubeAPILibs : NSObject

@property (nonatomic, retain) GTLServiceYouTube *youtubeService;

+ (id)sharedManager;

// link tham khảo

// youtbue 3.0
// https://developers.google.com/youtube/v3/docs/

// các api liên quan
// http://dev7dev.blogspot.jp/2014/07/videos-from-youtube-channel-in-ios-app.html

// đối ứng việc hiển thị video ở bản Youtube API 3.0
// https://developers.google.com/youtube/2.0/developers_guide_protocol_movies_and_shows?hl=ja
// http://stackoverflow.com/questions/19725950/youtube-related-videos-using-youtube-v3-api


// =================================================================
// =================================================================
//                                                           =======
//                 Các thư viện cần thực hiện                =======
//                                                           =======
// =================================================================

// =================================================================
// Thực hiện login vào Youtube, dùng cơ chế OAuth của nó để xác thực
// =================================================================
- (void)doLogin;
// =================================================================
// 動画一覧
// Hiển thị các list video của người dùng
// =================================================================
- (NSString*)showMyListVideo;
// =================================================================
// チャンネル
// Hiển thị các kênh của người dùng
// =================================================================
- (NSString*)getMyChanel;
// =================================================================
// お気に入る
// Hiển thị các danh sách like video của người dùng
// =================================================================
- (NSString*)getListLike;
// =================================================================
// プレイリスト
// Hiển thị các list video người dùng play
// =================================================================
- (NSString*)showMyPlaylist;
// =================================================================
// 検索
// Tìm kiếm video theo từ khoá
// =================================================================
- (NSString*)searchVideo:(NSString*)_keyword;
// =================================================================
// 後で見る
// Hiển thị các kênh người dùng xem sau
// =================================================================
- (void)showListVideoViewLater;
// =================================================================
// あなたへのおすすめ
// Hiển thị các video , có thể người dùng thích xem, kiểu recomandation
// =================================================================
- (NSString*)showlistRecommendationVideo;

// Hàm hỗ trợ
- (BOOL)isAuthorized;

@end
