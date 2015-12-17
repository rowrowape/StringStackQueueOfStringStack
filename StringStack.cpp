#include <string>

using namespace std;

struct StringStackElem {
    StringStackElem *next;
    string value;
};

struct StringStack {
    StringStackElem *first;

    StringStack() {
        first = 0;
    }
};

void putStringStackElem(StringStack &a, string value) {
    if (!a.first) {
        a.first = new StringStackElem;
        a.first->next = 0;
        a.first->value = value;
        return;
    }
    StringStackElem *newElem = new StringStackElem();
    (*newElem).next = a.first;
    (*newElem).value = value;
    a.first = newElem;
    return;
}

string takeStringStackElem(StringStack a) {
    if (a.first) {
        return a.first->value;
    } else {
        return "the stack is empty";
    }
}

void deleteStringStackElem(StringStack &a) {
    if (a.first) {
        StringStackElem *bufLink = a.first;
        a.first = a.first->next;
        delete bufLink;
        return;
    } else {
        cout << "the stack is empty";
    }
}

string pollStringStackElem(StringStack &a) {
    string buf = takeStringStackElem(a);
    deleteStringStackElem(a);
    return buf;
}


void clear(StringStack &a) {
    while (a.first) {
        deleteStringStackElem(a);
    }

    return;
}
