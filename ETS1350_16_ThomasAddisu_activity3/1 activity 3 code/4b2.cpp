#include <iostream>

using namespace std;

int main(){
    
    char letter='A';
    
    int row,column;
    cout<<"please enter the number of rows: ";
    cin>>row;
     
     if (row>26){
         cout<<"row number can't be greater than the number of upper case";
         return 0;
     }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<letter<<" ";
            letter++;

        }
        letter='A';
        cout<<endl;
    }
    
    return 0;
}