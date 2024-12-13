#include <iostream>
#include <cstring>


    using namespace std;

    int main() {
       
        int num,counter=0;

     cout << "please enter a number: ";
     cin >> num;
     
     
     while(num!=0){
       
       counter++;
       num/=10;
       
}
cout << "The number of digits is : "<<counter<< endl;
        return 0;
    }