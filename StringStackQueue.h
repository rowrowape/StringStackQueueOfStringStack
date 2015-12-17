//
// Created by awemath on 17.12.15.
//

#ifndef STRINGSTACKQUEUEOFSTRINGSTACK_STRINGSTACKQUEUE_H
#define STRINGSTACKQUEUEOFSTRINGSTACK_STRINGSTACKQUEUE_H

#include "StringStack.h"

struct StringStackQueueElem;

void init(StringStackQueueElem &a);

void clear(StringStackQueueElem &a);

void del(StringStackQueueElem &a);

StringStackElem *poll(StringStackQueueElem &a);

StringStackElem *peek(StringStackQueueElem &a);

void remove(StringStackQueueElem &a);

void add(StringStackElem in);

#endif //STRINGSTACKQUEUEOFSTRINGSTACK_STRINGSTACKQUEUE_H
