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



void putStringStackElem(StringStack &a, string &value)
{
    if (a.first = 0)
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

string takeStringStackElem(StringStack &a){
    return a.first->value;
}

void deleteStringStackElem(StringStack &a){
    delete a.first;
}