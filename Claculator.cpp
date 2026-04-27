#include <iostream>
using namespace std;

int main() {
    cout << "Simple Calculator" << endl;
    cout << "1. Add  2. Sub  3. Mul  4. Div" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    cout << "Enter first number: ";
    double a;
    cin >> a;
    cout << "Enter second number: ";
    double b;
    cin >> b;
    double result = 0;

    switch (choice) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if (b == 0) {
                cout << "Cannot divide by zero." << endl;
                return 1;
            } else {
                result = a / b;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            return 1;
    }
    cout << "Result: " << result << endl;
    return 0;
}
