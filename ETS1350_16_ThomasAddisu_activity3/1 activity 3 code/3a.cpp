#include <iostream>
#include <cstring>


    using namespace std;

    int main() {
       
        int num,digit;

     cout << "please enter a number: ";
     cin >> num;
     cout<<"The reverse of a number is: ";
     
     while(num!=0){
       
       digit=num%10;
       cout <<digit;
       num/=10;
       
     }

        return 0;
    }