#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double base, exponent;
    cout << "Please enter the base: ";
    cin >> base;
    cout << "Please enter the exponent: ";
    cin >> exponent;

    if (cin.fail()) {
        cout << "Invalid input" << endl;
        return 1; // Exit the program
    }

    double result;
    if (base != 0) {
        if (exponent > 0) {
            result = pow(base, exponent);
        } else if (exponent == 0) {
            result = 1;
        } else {
            result = 1 / pow(base, -exponent);
        }
        cout << "The power of " << base << " by " << exponent << " is " << result << endl;
    } else {
        if (exponent > 0) {
            result = 0;
            cout << "The power of " << base << " by " << exponent << " is " << result << endl;
        } else {
            string solution = "undefined in elementary math";
            cout << "The power of " << base << " by " << exponent << " is " << solution << endl;
        }
    }

    return 0;
}