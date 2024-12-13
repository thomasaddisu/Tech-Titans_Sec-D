#include <iostream>

using namespace std;

int main(){
    
    int row,column;
    cout<<"please enter the number of rows: ";
    cin>>row;
    
    
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z <= i; z++)
        {
           cout<<z+1<<" ";
        }
        for (int j = row-1; j > i; j--)
        {
           cout<<"  ";
        }
        
        cout<<endl;
        
    }
   
    return 0;
}