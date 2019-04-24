#pragma once

#include "types.h"

class JSUPtrLink;
class JSUPtrList;

class JSUPtrLink {
public:
    JSUPtrLink(void *);
    ~JSUPtrLink(void);
    void* object;
    JSUPtrList* owner;
    JSUPtrList* next;
    JSUPtrList* prev;
};

class JSUPtrList {
public:
    JSUPtrList(bool);
    ~JSUPtrList(void);
    void initiate(void);
    void setFirst(JSUPtrLink *);
    bool append(JSUPtrLink *);
    bool prepend(JSUPtrLink *);
    bool insert(JSUPtrLink *, JSUPtrLink *);
    bool remove(JSUPtrLink *);

    JSUPtrLink* first;
    JSUPtrLink* last;
    long count;
};