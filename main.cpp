#include <iostream>
#include "StringStackQueue.cpp"

using namespace std;

void menu(string s) {

}

int readInt() {
    int key;
    cin >> key;
    while (cin.fail()) {
        cin.ignore(cin.rdbuf()->in_avail());
        cin.clear();
        cout << "Make your choose" << endl;
        cin >> key;
    }
    return key;
}


int main() {
    StringStack *a = 0;
    StringStackQueue queue;
    string value;
    int key;
    while (key != 11) {
        cout << "1. Create stack" << endl << "2. Enter higher element to stack" << endl <<
        "3. Delete higher element from stack" << endl;
        cout << "4. Print highest element from stack" << endl;
        cout << "5. Clear stack" << endl << "6. Delete stack" << endl;
        cout << "7. Push stack to queue" << endl <<
        "8. Take and delete stack from queue" << endl << "9. Print queue" << endl;
        cout << "10. Clear queue" << endl;
        cout << "11. Exit" << endl;

        cout << "Make your choose" << endl;
        key = readInt();
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
                    try {
                        deleteStringStackElem(*a);
                    } catch (string *str) {
                        cout << *str;
                    }
                    break;
                }
                case 4 : {
                    if (a == 0) {
                        cout << "You haven`t active stack";
                        break;
                    }
                    try {
                        cout << takeStringStackElem(*a);
                    } catch (string *str) {
                        cout << *str;
                    }
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
                    try {
                        a = poll(queue);
                    } catch (string *str) {
                        cout << *str;
                    }
                    break;
                }
                case 9 : {
                    try {
                        print(queue);
                    } catch (string *str) {
                        cout << str;
                    }
                    break;
                }
                case 10 : {
                    clear(queue);
                    break;
                }
            }
        } catch (string *s) {
            cout << s;
        }
        cout << endl << endl;
    }
    return 0;
}