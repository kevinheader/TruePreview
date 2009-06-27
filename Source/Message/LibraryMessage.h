/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "Message.h"

#import "LibraryObject-Protocol.h"

@class MFUUID, NSArray, NSString;

@interface LibraryMessage : Message <LibraryObject>
{
    unsigned int _options;
    BOOL _isBeingChanged;
    unsigned int _libraryID;
    NSString *_remoteID;
    unsigned int _uid;
    NSArray *_references;
    unsigned int _size;
    CDAnonymousStruct4 _imapFlags;
    unsigned int _mailboxID;
    unsigned int _originalMailboxID;
    NSString *_messageID;
    Message *_note;
    NSArray *_todos;
    Message *_associatedMessage;
    MFUUID *_noteDocumentID;
}

+ (void)initialize;
+ (id)messageWithLibraryID:(unsigned int)fp8;
- (id)initWithLibraryID:(unsigned int)fp8;
- (void)release;
- (id)messageID;
- (id)persistentID;
- (id)documentID;
- (void)setDocumentID:(id)fp8;
- (id)noteDocumentID;
- (void)setNoteDocumentID:(id)fp8;
- (id)originalMailboxURL;
- (int)type;
- (id)references;
- (BOOL)setReferences:(id)fp8;
- (id)note;
- (void)setNote:(id)fp8;
- (id)todos;
- (void)setTodos:(id)fp8;
- (id)subject;
- (id)sender;
- (id)to;
- (id)messageIDHeaderDigest;
- (id)inReplyToHeaderDigest;
- (unsigned int)messageSize;
- (void)setMessageSize:(unsigned int)fp8;
- (id)messageStore;
- (void)setMessageStore:(id)fp8;
- (id)mailbox;
- (void)_updateUID;
- (void)setRemoteID:(id)fp8;
- (id)remoteID;
- (BOOL)isEqual:(id)fp8;
- (unsigned int)hash;
- (void)setIMAPFlags:(CDAnonymousStruct4)fp8;
- (CDAnonymousStruct4)imapFlags;
- (unsigned long)uid;
- (void)setUid:(unsigned long)fp8;
- (BOOL)isPartial;
- (void)setIsPartial:(BOOL)fp8;
- (void)setIsPartial:(BOOL)fp8 partsHaveBeenCached:(BOOL)fp12 commitNow:(BOOL)fp16;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)partsHaveBeenCached;
- (void)setPartsHaveBeenCached:(BOOL)fp8;
- (void)setPreferredEncoding:(unsigned long)fp8;
- (BOOL)hasTemporaryUid;
- (void)setHasTemporaryUid:(BOOL)fp8;
- (id)mailboxName;
- (int)compareByUidWithMessage:(id)fp8;
- (void)setMessageFlagsWithoutCommitting:(unsigned long)fp8;
- (void)setMessageFlags:(unsigned long)fp8;
- (void)setFlags:(unsigned long long)fp8;
- (void)setColorHasBeenEvaluated:(BOOL)fp8;
- (void)setColorWithoutCommitting:(id)fp8;
- (void)setColor:(id)fp8;
- (void)setLibraryColor:(char *)fp8;
- (void)setColor:(id)fp8 hasBeenEvaluated:(BOOL)fp12 flags:(unsigned long)fp16;
- (void)setColor:(id)fp8 hasBeenEvaluated:(BOOL)fp12 flags:(unsigned long)fp16 commit:(BOOL)fp20;
- (void)commit;
- (void)commitLater;
- (void)beginChanging;
- (BOOL)endChanging:(BOOL)fp8;
- (void)reload;
- (void)setMutableInfoFromMessage:(id)fp8;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)path;
- (id)account;
- (void)markAsViewed;
- (id)preferredEmailAddressToReplyWith;
- (void)setRemoteID:(const char *)fp8 documentID:(id)fp12 flags:(unsigned long long)fp16 size:(unsigned int)fp24 mailboxID:(unsigned int)fp28 originalMailboxID:(unsigned int)fp32 color:(char *)fp36 noteDocumentID:(id)fp40;
- (void)loadMessageInfoIfNecessary;
- (id)messageDataIncludingFromSpace:(BOOL)fp8 newDocumentID:(id)fp12;
- (void)_calculateAttachmentInfoFromBody:(id)fp8;
- (id)associatedMessage;
- (void)setAssociatedMessage:(id)fp8;
- (unsigned int)options;
- (void)setOptions:(unsigned int)fp8;
- (unsigned int)originalMailboxID;
- (void)setOriginalMailboxID:(unsigned int)fp8;
- (unsigned int)mailboxID;
- (void)setMailboxID:(unsigned int)fp8;
- (unsigned int)libraryID;

@end

