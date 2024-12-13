#include <iostream>

using namespace std;

int main(){
    
    int row,column;
    cout<<"please enter the number of rows: "; 
    cin>>row;
    
    
    for (int i = 0; i < row; i++)
    {
        
        for (int j = row-1; j > i; j--)
        {
           cout<<"  ";
        }
        for (int z = i; z >= 0; z--)
        {
            
           cout<<z+1<<" ";
        }
        
        cout<<endl;
        
    }
 
    return 0;
}