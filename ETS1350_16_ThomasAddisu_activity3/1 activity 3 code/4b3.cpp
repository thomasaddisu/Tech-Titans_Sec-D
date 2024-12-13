#include <iostream>

using namespace std;

int main(){
    
    char letter='a';
    
    int row,column;
    cout<<"please enter the number of rows: ";
    cin>>row;
    cout<<"please enter the number of columns: ";
    cin>>column;
    
    if(column>26){
        cout<<"the number of column can't be more than 26 number of lower case letters  ";
        return 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<letter<<" ";
            letter++;

        }
        letter='a';
        cout<<endl;
    }
  
    return 0;
}