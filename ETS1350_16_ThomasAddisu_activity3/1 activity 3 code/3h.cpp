#include <iostream>
using namespace std;

int main() {
    int num;
    int digit, frequency;

    cout << "Please enter an integer: ";
    cin >> num;

    
    num = abs(num);

    
    cout << "\nDigit Frequency Table:" << endl;
    cout << "-----------------------" << endl;
    cout << "Digit   Frequency" << endl;
    cout << "-----------------------" << endl;

    
    for (int i = 0; i < 10; i++) {
        frequency = 0;
        int temp = num;

        
        while (temp != 0) {
            digit = temp % 10;
            if (digit == i) {
                frequency++;
            }
            temp /= 10;
        }

        
        cout << i << "       " << frequency << endl;
    }

    return 0;
}
