//
// Created by awemath on 17.12.15.
//

#include "StringStackQueue.h"

struct StringStackQueueElem {
    StringStackElem *value;
    StringStackQueueElem *next;
};

struct StringStackQueue {
    StringStackQueueElem *head;
    StringStackQueueElem *tail;
    int size;

    StringStackQueue() {
        head = 0;
        tail = 0;
        size = 0;
    }
};

void push(StringStackQueue &a, StringStackElem in) {
    StringStackQueueElem elem;
    elem.value = in;
    a.tail->next = elem;
    a.tail = elem;
    if (size == 0) {
        a.head = elem;
    }
    a.size++;
}

void del(StringStackQueue &a) {
    if (a.size > 0) {
        StringStackQueueElem *bufLink = a.head;
        a.head = a.head->next;
        a.size--;
        delete bufLink;
    }
}

void clear(StringStackQueue &a) {
    while (a.size > 0) {
        del(a);
    }
}

//retrieves and remove head element
StringStackElem *poll(StringStackQueue &a) {
    if (a.size > 0) {
        StringStackQueueElem *bufLink = a.head;
        StringStackQueueElem outputElem = bufLink;
        a.head = a.head->next;
        delete *bufLink;
        return outputElem;
    }
}

//retrieves but doesn`t remove head element
StringStackElem *peek(StringStackQueue &a) {
    return a.head;
}