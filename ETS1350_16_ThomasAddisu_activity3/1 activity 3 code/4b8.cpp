#include <iostream>

using namespace std;

int main(){
    
       int row,column;
    cout<<"please enter the number of rows: ";
    cin>>row;
    
    
      for (int t = 1; t <=row; t++)
      {
     
      for (int  i = 0; i < t; i++)
      {      cout<<" ";
      }
        for (int  j = row+1; j > t; j--)
        {     cout<<"* ";
        }
     
        cout<<endl;
      }
      
    return 0;
}