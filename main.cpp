#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "\n--- Physics Equation Menu ---\n";
        cout << "1. Newton's Second Law\n";
        cout << "2. Momentum\n";
        cout << "3. Kinetic Energy\n";
        cout << "4. Potential Energy\n";
        cout << "5. Ohm's Law\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";

        cin >> choice;

        if (choice == 0) {
            cout << "Goodbye!\n";
            break;
        }

        cout << "\nEquation: ";

        switch (choice) {
            case 1:
                cout << "F = m * a\n";
                break;
            case 2:
                cout << "p = m * v\n";
                break;
            case 3:
                cout << "KE = 1/2 * m * v^2\n";
                break;
            case 4:
                cout << "U = m * g * h\n";
                break;
            case 5:
                cout << "V = I * R\n";
                break;
            default:
                cout << "Invalid option!\n";
                break;
        }
    }

    return 0;
}
