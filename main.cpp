#include <iostream>
#include "StringStackQueue.cpp"
#include <string>

using namespace std;

void menu(string s) {

}

int main() {
    StringStack *a = 0;
    StringStackQueue queue;
    string value;
    int key;
    while (key != 10) {
        cout << "1. Create stack" << endl << "2. Enter higher element to stack" << endl <<
        "3. Delete higher element from stack" << endl;
        cout << "5. Clear stack" << endl << "6.Delete stack" << endl;
        cout << "7. Push stack to queue" << endl <<
        "8. Take and delete stack from queue" << endl << "9. Clear queue" << endl;
        cout << "10. Exit" << endl;

        cout << "Make your choose" << endl;
        cin >> key;
        while (cin.fail()) {
            cout << "Make your choose" << endl;
            cin >> key;
        }
        try {
            switch (key) {
                case 1 : {
                    if (a != 0) {
                        cout << "You allready have active stack";
                        break;
                    }
                    a = new StringStack();
                    break;
                }
                case 2 : {
                    if (a == 0) {
                        cout << "You haven`t active stack";
                        break;
                    }
                    cin.ignore();
                    getline(cin, value);
                    putStringStackElem(*a, value);
                    break;
                }
                case 3 : {
                    if (a == 0) {
                        cout << "You haven`t active stack";
                        break;
                    }
                    deleteStringStackElem(*a);
                    break;
                }
                case 4 : {
                    if (a == 0) {
                        cout << "You haven`t active stack";
                        break;
                    }
                    cout << takeStringStackElem(*a);
                    break;
                }
                case 5 : {
                    if (a == 0) {
                        cout << "You haven`t active stack";
                        break;
                    }
                    clear(*a);
                    break;
                }
                case 6 : {
                    if (a == 0) {
                        cout << "You haven`t active stack";
                        break;
                    }
                    clear(*a);
                    delete a;
                    a = 0;
                    break;
                }
                case 7 : {
                    if (a == 0) {
                        cout << "You haven`t active stack";
                        break;
                    }
                    push(queue, a);
                    a = 0;
                    break;
                }
                case 8 : {
                    if (a != 0) {
                        cout << "You allready have active stack";
                        break;
                    }
                    a = poll(queue);
                    break;
                }
                case 9 : {
                    clear(queue);
                    break;
                }
            }
        } catch (string s) {
            cout << s;
            cin.get();
        }
        cout << endl << endl;
    }
    return 0;
}