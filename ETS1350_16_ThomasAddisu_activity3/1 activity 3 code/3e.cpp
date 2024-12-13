#include <iostream>
#include <cmath>


    using namespace std;

    int main() {
       
        int num,digitOfNUm=0,lastdigit,firstdigit,temp,middleDigit,swapnum;

     cout << "please enter a number: " << endl;
     cin >> num;
     temp=num;
     
     
     
     while(num!=0){
       
       digitOfNUm++;

       num/=10;
       
     }
      
     lastdigit=temp%10;
      
     
     firstdigit=temp/(int) pow(10,digitOfNUm-1);
     middleDigit=(temp/10)% (int)pow(10,digitOfNUm-2);
     if (lastdigit==0){
    
       swapnum=(middleDigit*10)+firstdigit;
       
       cout<<"The number swaped with the first and last digit is :  "<<lastdigit<<swapnum;
        
     }else{
     swapnum=(lastdigit*(int) pow (10,digitOfNUm-1))+(middleDigit*10)+firstdigit;
     cout<<"The number swaped with the first and last digit is :  "<<swapnum;
     }
        return 0;
    }