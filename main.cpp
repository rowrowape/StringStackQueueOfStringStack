#include <iostream>
#include "StringStackQueue.cpp"
#include <string>

using namespace std;

void menu(string s) {

}

int main() {
    StringStack SS;
    string buf;
    putStringStackElem(SS, "klu");
    putStringStackElem(SS, "7789");
    cout << takeStringStackElem(SS);
    return 0;
}