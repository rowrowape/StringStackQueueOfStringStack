//
// Created by awemath on 17.12.15.
//
#include "StringStack.cpp"

using namespace std;
struct StringStackQueueElem {
    StringStack *value;
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

void push(StringStackQueue &a, StringStack in) {
    StringStackQueueElem *elem = new StringStackQueueElem();
    elem->value = &in;
    a.tail = elem;
    if (a.size > 0) {
        elem->next = a.tail;
    } else {
        a.head = elem;
        elem->next = 0;
    }
    a.size++;
}

void remove(StringStackQueue &a) {
    if (a.size > 0) {
        StringStackQueueElem *bufLink = a.head;
        a.head = a.head->next;
        a.size--;
        delete bufLink;
    } else {
        throw "StringStackQueue is empty!";
    }
}

void clear(StringStackQueue &a) {
    while (a.size > 0) {
        remove(a);
    }
}

//retrieves and remove head element
StringStack *poll(StringStackQueue &a) {
    if (a.size > 0) {
        StringStackQueueElem *bufLink = a.head;
        StringStack *output = a.head->value;
        remove(a);
        return output;
    } else {
        throw "StringStackQueue is empty!";
    }
}

//retrieves but doesn`t remove head element
StringStack *peek(StringStackQueue &a) {
    if (a.size > 0) {
        return a.head->value;
    } else {
        throw "StringStackQueue is empty!";
    }
}

void del(StringStackQueue &a) {
    clear(a);
}