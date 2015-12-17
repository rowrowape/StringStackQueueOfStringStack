//
// Created by awemath on 17.12.15.
//

#ifndef STRINGSTACKQUEUEOFSTRINGSTACK_STRINGSTACKQUEUE_H
#define STRINGSTACKQUEUEOFSTRINGSTACK_STRINGSTACKQUEUE_H

#include "StringStack.cpp"

struct StringStackQueue;

struct StringStackQueueElem;


void clear(StringStackQueue &a);

void del(StringStackQueue &a);

StringStackElem *poll(StringStackQueue &a);

StringStackElem *peek(StringStackQueue &a);

void remove(StringStackQueue &a);

void push(StringStackQueue &a, StringStackElem in);

#endif //STRINGSTACKQUEUEOFSTRINGSTACK_STRINGSTACKQUEUE_H
