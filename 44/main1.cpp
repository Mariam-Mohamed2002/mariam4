#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    if (num1 == num2) {
        cout << "The numbers are equal." << endl;
    } else {
        cout << "The numbers are not equal." << endl;
    }

    return 0;
}
