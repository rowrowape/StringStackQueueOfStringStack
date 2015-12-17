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
}