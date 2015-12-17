#include "StringStack.h"
#include <string>
using namespace std;

struct StringStack{
StringStackElem *first;
    StringStack(){
        first = 0;
    }
};

struct StringStackElem{
    StringStackElem *next;
    string value;
};

void putStringStackElem(StringStack &a, string value)
{
    //work with null object
    if (a.first == 0)
    {
        a.first->next = 0;
        a.first->value = value;
        return;
    }
StringStackElem newElem;
newElem.next = first;
newElem.value = value;
first = newElem;
    return;
}

string takeStringStackElem(StringStack a){
    return a.first->value;
}

string pollStringStackElem(StringStack &a){
    string buf = takeStringStackElem(a);
    deleteStringStackElem(a);
    return buf;
}

void deleteStringStackElem(StringStack &a){
    StringStackQueueElem *bufLink = a.first;
    a.first = a.first->next;
    delete bufLink;
    return;
}

void clear(StringStack &a) {
    while (a.first) {
        deleteStringStackElem(a);
    }
    return;
}
