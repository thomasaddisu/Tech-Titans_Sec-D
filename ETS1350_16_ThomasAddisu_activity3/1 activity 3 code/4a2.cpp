#include <iostream>

using namespace std;

int main(){
    
    char letter='A';

    int row,column;
    cout<<"please enter the number of rows: ";
    cin>>row;
    cout<<"please enter the number of columns: ";
    cin>>column;
    
    if (row*column>26){
        cout<<"you enter over a  maximum of uper case letters ";
        return 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<letter;
            letter++;

        }
        cout<<endl;
    }
    

    return 0;
}