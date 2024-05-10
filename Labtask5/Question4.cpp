#include <iostream>
using namespace std;

int main() {
    int userInput;
    while (true) {
        cout << "Enter a number between 5 and 10: ";
        if (!(cin >> userInput)) {
            cout << "Invalid input! Enter a number between 5 and 10." << endl;
            continue;
        }
        if (userInput >= 5 && userInput <= 10) {
            break;
        }
        cout << "Invalid input! Enter a number between 5 and 10." << endl;
    }

    cout << "Your input value " << userInput << " has been accepted." << endl;

    return 0;
}
