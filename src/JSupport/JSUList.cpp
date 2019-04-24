#include "JSupport/JSUList.h"

JSUPtrLink::JSUPtrLink(void *object) {

}

JSUPtrLink::~JSUPtrLink(void) {

}

JSUPtrList::JSUPtrList(bool initiate) {
    if (initiate)
        this->initiate();
}

JSUPtrList::~JSUPtrList(void) {
}

void JSUPtrList::initiate(void) {
    this->first = NULL;
    this->last = NULL;
    this->count = 0;
}

void JSUPtrList::setFirst(JSUPtrLink *link) {
    link->owner = this;
    link->next = NULL;
    link->prev = NULL;
    this->last = link;
    this->first = link;
    this->count = 1;
}

bool JSUPtrList::append(JSUPtrLink *link) {

}

bool JSUPtrList::prepend(JSUPtrLink *link) {

}

bool JSUPtrList::insert(JSUPtrLink *link, JSUPtrLink *insert) {
    if (link == this->first)
        return prepend(insert);
    
    else {
        if (link == NULL)
            return append(insert);
        
        else {
            if (link->owner != this)
                return false;
            
            if (insert->owner == NULL)
                return remove(insert);
            
            else {
                insert->owner = this;
                insert->next = link->next;
                insert->prev->first->object = link->object;
                link->next->first = insert;
                this->count++;
                return true;
            }
        }
    }
}

bool JSUPtrList::remove(JSUPtrLink *link) {
    if (link->owner == NULL) //no owner to remove from
        return false;

    if (this->count == 1) {
        this->first = NULL;
        this->last = NULL;
    }
    else {
        if (this->first == link) {
            link->prev->count = 0;
            this->first = link->prev->first;
        }
        else {
            if (link == this->last) {
                link->next->first->prev = NULL;
                this->last = link->next->first;
            }
            else {
                link->next->first->prev = link->prev;
                link->prev->first->next = link->next;
            }
        }
    }
    link->owner = NULL;
    this->count--;
    return true;
}