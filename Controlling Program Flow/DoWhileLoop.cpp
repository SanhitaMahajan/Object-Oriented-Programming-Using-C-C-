#include <iostream>
using namespace std;

//  simple menu example using do while loop & switch statement 

int main() {
    char selection;
    
    do {
        cout << "\n================================================================" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "Enter your choice - ";
        cin >> selection;

        switch (selection) {
            case '1':
                cout << "You chose 1 - do this" << endl;
                break;
            case '2':
                cout << "You chose 2 - do that" << endl;
                break;
            case '3':
                cout << "You chose 3 - doing something else" << endl;
                break;
            case 'Q':
            case 'q':
                cout << "Good Bye......" << endl;
                break;
            default:
                cout << "Unknown option -- try again" << endl;
        }

    } while (selection != 'Q' && selection != 'q');

    return 0;
}
