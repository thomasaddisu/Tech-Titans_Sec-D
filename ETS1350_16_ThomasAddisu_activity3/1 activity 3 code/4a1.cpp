#include <iostream>

using namespace std;

int main(){

    int row,column;
    cout<<"please enter the number of rows: ";
    cin>>row;
    cout<<"please enter the number of columns: ";
    cin>>column;


    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < column; i++)
      {
        cout<<i+1<<" ";
      }
      cout<<endl;
    }
  
    return 0;
    
}