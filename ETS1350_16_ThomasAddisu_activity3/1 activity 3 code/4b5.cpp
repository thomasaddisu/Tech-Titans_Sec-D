#include <iostream>

using namespace std;

int main(){
    
    int row,column;
    cout<<"please enter the number of rows: ";
    cin>>row;
    

    for (int j = 0; j < row; j++)
    {
        for (int i = row; i > j; i--)
      {
        cout<<"*";
      }
      cout<<endl;
    }
  
    return 0;
}