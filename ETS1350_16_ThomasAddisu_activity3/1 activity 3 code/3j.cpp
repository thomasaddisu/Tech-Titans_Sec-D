#include <iostream>

using namespace std;

int main(){

      int num,divisor_sum=0;

      cout<<"please enter a number: ";
      cin>>num;

    for (int i = 1; i < num; i++)
    {
       if (num%i==0)
       {
        divisor_sum+=i;
       }
       
    }
    
      if (divisor_sum==num)
      {
        cout<<"the number "<<num<<" is a perfect number"<<endl;
      }else{
        cout<<"the number "<<num<<" is not a perfect number"<<endl;
      }
      
      



    return 0;
}