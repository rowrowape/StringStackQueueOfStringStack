#include <string>
using namespace std;

struct StringStackElem{
    StringStackElem *next;
    string value;
};

struct StringStack{
StringStackElem *first;
    StringStack(){
        first = 0;
    }
};

void putStringStackElem(StringStack &a, string value)
{
    if (a.first == 0)
    {
        a.first = new StringStackElem;
        a.first->next = 0;
        a.first->value = value;
        return;
    }
StringStackElem newElem;
newElem.next = a.first;
newElem.value = value;
a.first = &newElem;
    return;
}

string takeStringStackElem(StringStack a){
    return a.first->value;
}

void deleteStringStackElem(StringStack &a){
    StringStackQueueElem *bufLink = a.first;
    a.first = a.first->next;
    delete bufLink;
    return;
}

string pollStringStackElem(StringStack &a){
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
