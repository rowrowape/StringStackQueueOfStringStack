#include <iostream>
#include "StringStackQueue.cpp"
#include <string>

using namespace std;

void menu(string s) {

}

int main() {
  StringStack a;
    string value;
    cout << "1. Create stack" << endl << "2. Enter higher element to stack" << endl <<"3. Delete higher element from stack"<<endl;
    cout << "5. Clear stack" << endl << "6.Delete stack" <<endl;
    cout << "7. Push stack to queue" << "8. Take and delete stack from queque" << endl << "9. Clear queque";
    int key;
    cin >> key;
    switch (key) {
        case 1 : {break;}
        case 2 : {
            cin >> value;
            put(putStringStackElem, value);
            break;
        }
        case 3 : {
            deleteStringStackElem(a);
            break;
        }
        case 4 : {
            cout << takeStringStackElem(a);
            break;
        }
        case 5 : {
            break;
        }
        case 6 : {
            break;
        }
        case 7 : {
            break;
        }
        case 8 : {
            break;
        }
        case 9 : {
            break;
        }
    }
    return 0;
}