#include "StringStack.h"
#include <string>
using namespace std;

struct StringStackElem{
    StringStack *next;
    string value;
};

