#include <iostream>
#include "StringStack.cpp"
#include <string>
using namespace std;

int main() {
    StringStack SS = new StringStack;
    put(SS, "kli");
    put (SS, "8");
    pollStringStackElem(SS);
    clear(SS);


    return 0;
}