//----------------------------------------------------------------------------------------
//  RepoItem.h - A file or folder in a Subversion repository.
//
//	Copyright © Chris, 2008 - 2009.  All rights reserved.
//----------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import "SvnInterface.h"


@interface RepoItem : NSObject
{
	NSString*	fName;
	NSString*	fAuthor;
	NSString*	fPath;
	NSString*	fFileType;
	NSURL*		fURL;
	UTCTime		fTime;
	SInt64		fSize;
	SvnRevNum	fRevision,
				fModRev;
	BOOL		fIsRoot,
				fIsDir;
}

+ (id)			repoItem:		(NSDictionary*) dict
				revision:		(SvnRevNum)     revision;
+ (id)			repoItem:		(BOOL) isDir;
+ (id)			repoItem:		(BOOL)      isDir
				name:			(NSString*) name
				author:			(NSString*) author
				revision:		(SvnRevNum) revision
				modRev:			(SvnRevNum) modRev
				time:			(UTCTime)   time
				size:			(SInt64)    size;
+ (id)			repoRoot:		(BOOL)      isDir
				name:			(NSString*) name
				revision:		(SvnRevNum) revision
				url:			(NSURL*)    url;
- (BOOL)		isRoot;
- (BOOL)		isDir;
- (void)		setName:		(NSString*) name;
- (NSString*)	name;
- (void)		setAuthor:		(NSString*) author;
- (NSString*)	author;
- (NSString*)	path;
- (NSString*)	fileType;
- (void)		setRevision:	(SvnRevNum) revision;
- (SvnRevNum)	revisionNum;
- (NSString*)	revision;
- (void)		setModRev:		(SvnRevNum) modRev;
- (SvnRevNum)	modRevNum;
- (NSString*)	modRev;
- (void)		setSize:		(SInt64) size;
- (SInt64)		size;
- (void)		setTime:		(UTCTime) time;
- (UTCTime)		time;
//- (void)		setURL:			(NSURL*) url;
- (NSURL*)		url;

- (BOOL)		setUp:			(NSString*)	pathToColumn
				url:			(NSURL*)	url;
- (NSImage*)	icon:			(id) iconCache;
- (NSString*)	toolTip;
- (NSString*)	pathWithRevision;
- (NSDictionary*) dictionary;

@end	// RepoItem


//----------------------------------------------------------------------------------------
// End of RepoItem.h
