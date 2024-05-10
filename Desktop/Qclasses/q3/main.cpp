
// main.cpp
#include "Shapes.h"
#include <iostream>

using namespace std;
using namespace shapes;

int main() {
    int option;
    do {
        cout << "Select shape to calculate its area" << endl;
        cout << "======================================================" << endl;
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter Option: ";
        cin >> option;

        if (option < 1 || option > 4) {
            cout << "Invalid Choice. Enter a Valid Option" << endl;
            continue;
        }

        switch (option) {
            case 1: {
                int side;
                cout << "Enter value of side: ";
                cin >> side;
                Square s(side);
                cout << "The area of the square is: " << Area::areaOfSquare(s) << endl;
                break;
            }
            case 2: {
                int base, height;
                cout << "Enter value of base: ";
                cin >> base;
                cout << "Enter value of height: ";
                cin >> height;
                Triangle t(base, height);
                cout << "The area of the triangle is: " << Area::areaOfTriangle(t) << endl;
                break;
            }
            case 3: {
                int radius;
                cout << "Enter value of radius: ";
                cin >> radius;
                Circle c(radius);
                cout << "The area of the circle is: " << Area::areaOfCircle(c) << endl;
                break;
            }
            case 4:
                return 0; // Exit the loop
        }
    } while (true);

    return 0;
}
