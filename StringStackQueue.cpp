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

void push(StringStackQueue &a, StringStack *in) {
    StringStackQueueElem *elem = new StringStackQueueElem();
    elem->value = in;

    if (a.size > 0) {
        a.tail->next = elem;
    } else {
        a.head = elem;
        elem->next = 0;
    }
    a.tail = elem;
    a.size++;
}

void remove(StringStackQueue &a) {
    if (a.size > 0) {
        StringStackQueueElem *bufLink = a.head;
        a.head = a.head->next;
        a.size--;
        delete bufLink;
    } else {
        throw new string("StringStackQueue is empty!");
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
        throw new string("StringStackQueue is empty!");
    }
}

//retrieves but doesn`t remove head element
StringStack *peek(StringStackQueue &a) {
    if (a.size > 0) {
        return a.head->value;
    } else {
        throw new string("StringStackQueue is empty!");
    }
}

void del(StringStackQueue &a) {
    clear(a);
}

void print(StringStackQueue a) {
    StringStackQueueElem *buf = a.head;
    if (a.size <= 0) {
        throw new string("StringStackQueue is empty!");
    }
    while (buf->next) {
        cout << takeStringStackElem(*(buf->value)) << "\t";
        buf = buf->next;
    }
    cout << takeStringStackElem(*(buf->value)) << endl;
}