//
//  AlbumPhotoListController.h
//  PhotoLibrary
//
//  Created by 刘 大兵 on 12-5-11.
//  Copyright (c) 2012年 中华中等专业学校. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PhotoAlbum.h"

@interface AlbumPhotoListController : UIViewController<UITableViewDelegate,UITableViewDataSource>{
    UITableView *DataTable;
}
@property(nonatomic,retain) PhotoAlbum *photoAlbum;
@end
