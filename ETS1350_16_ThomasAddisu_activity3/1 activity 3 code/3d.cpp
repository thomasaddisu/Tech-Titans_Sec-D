#include <iostream>
#include <cmath>


    using namespace std;

    int main() {
       
        int num,digitOfNUm=0,lastdigit,firstdigit,temp;

     cout << "please enter a number: " << endl;
     cin >> num;
     temp=num;
     
     
     
     while(num!=0){
       
       digitOfNUm++;

       num/=10;
       
     }

     lastdigit=temp%10;
     firstdigit=temp/(int) pow(10,digitOfNUm-1);

     cout<<"The last digit is: "<<lastdigit<<endl;
     cout<<"The first digit is: "<<firstdigit;

        return 0;
    }