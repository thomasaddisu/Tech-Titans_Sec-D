#include <iostream>
using namespace std;

int main() {
    int num_persons;
    
    cout << "Enter the number of persons: ";
    cin >> num_persons;
    int i = 1;


    while (i <= num_persons) {
        float weight, height, bmi;

    
        cout << "\nEnter weight (in kg) for person " << i << ": ";
        cin >> weight;
        cout << "Enter height (in meters) for person " << i << ": ";
        cin >> height;

        
        bmi = weight / (height * height);

        
        cout << "BMI: " << bmi << " - ";
        if (bmi >= 18.5 && bmi <= 24.9) {
            cout << "Normal" << endl;
        } else if (bmi > 25) {
            cout << "Overweight" << endl;
        } else {
            cout << "Underweight" << endl;
        }

        
        i++;
    }

    
    return 0;
}
