#include <iostream>
#include <cstring>


    using namespace std;

    int main() {
       
        int num,digit,counter=0,product=1;

     cout << "please enter a number: " << endl;
     cin >> num;
     
     while(num!=0){
       
       digit=num%10;
       
       if(digit%2 ==0){
       
       product *= digit;
       
       }       
       
       num/=10;
       
}
cout << "the number of digits is : "<<product<< endl;
        return 0;
    }