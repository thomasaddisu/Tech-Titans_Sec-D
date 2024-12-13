#include <iostream>

using namespace std;

int main(){

      int row,column;
    cout<<"please enter the number of rows: ";
    cin>>row;
    
    
    
    for (int j = 0; j < row; j++)
    {
        for (int i = row-1; i >= j; i--)
      {
        if (j==0)
        {
           cout<<"*";
        }else {
            if (i==row-1 || i==j)
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
        }   
      }
      cout<<endl;
    }

    return 0;
}