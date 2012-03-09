/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVLeafItem, NSMutableSet;

@interface CalDAVCalendarServerReplyItem : CoreDAVItem  {
    CoreDAVLeafItem *_attendee;
    NSMutableSet *_recurrences;
}

@property(retain) NSMutableSet * recurrences;
@property(retain) CoreDAVLeafItem * attendee;


- (void)dealloc;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setAttendee:(id)arg1;
- (id)attendee;
- (id)recurrences;
- (void)setRecurrences:(id)arg1;
- (void)addRecurrence:(id)arg1;

@end