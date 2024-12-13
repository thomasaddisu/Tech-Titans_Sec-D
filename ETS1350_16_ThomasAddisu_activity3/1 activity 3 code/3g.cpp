#include <iostream>
#include <cmath>


    using namespace std;

    int main() {
       
        int num,digit,counter=0,swap=0,numOfDigit=0,temp1,temp2;

     cout << "please enter a number: ";
     cin >> num;
     temp1=num;
     temp2=num;
    
     
     while(temp1!=0){
       
       numOfDigit++;
       temp1/=10;
       
}

     
     while(temp2!=0){
       counter++;
       digit=temp2%10;

       swap+=digit*(int)pow(10,numOfDigit-counter);
       
      temp2/=10;
       
     }
      
      if (num==swap)
      {
        cout<<"The number: "<<num<<"is palindrome";
      }else{
        cout<<"The number: "<<num<<"is NOT palindrome";
      }
      

        return 0;
    }