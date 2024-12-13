#include <iostream>

using namespace std;

int main(){
      for (int i = 0; i <= 6; i++)
      {
      for (int  j = 6; j >= i; j--)
      {      cout<<" ";
      }
        for (int  z = 0; z <= i; z++)
        {     
          if ( i!=6 )
        {
            if (z==0 || z==i )
            {
               cout<<"* ";
            }else
            {
              cout<<"  ";
            }
            
            
        }else{
            cout<<"* ";
        }
        
        }
           
           
        cout<<endl;
      }
      
      



    return 0;
}