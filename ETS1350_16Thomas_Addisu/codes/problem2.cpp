problem2.cpp
#include<iostream>
using namespace std;

int main(){

     int fuel,mile_per_gallon;
    cout << "please enter the fuel capacity of your automobile in gallon: ";
    cin>>fuel;
    cout << "please enter the mile per gallon achived by your automobile : ";
    cin >> mile_per_gallon;
    int mile;
    mile=fuel*mile_per_gallon;
    cout << "you can drive your car " <<mile<<" mile by "<<fuel<<" gallon fuels "<<endl;
    
    return 0;
}