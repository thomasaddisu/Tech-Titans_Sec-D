#include<iostream>

using namespace std;

int main(){

int rate=960,days,hours,minutes;

long long fileSize,timeTaken;

cout << "please enter your fileSize in bytes: " << endl;
cin >> fileSize;
if(cin.fail() || fileSize<0){
cout << "invalid fileSize please try again" << endl;
}
else{

timeTaken = fileSize/rate;

days = timeTaken/86400  ;
hours = timeTaken/3600 ;
minutes = timeTaken/60;

cout << "time Taken to transfer afile in days: " <<days<< endl;
cout << "time Taken to transfer afile in hours: " <<hours<< endl;
cout << "time Taken to transfer afile in minutes: " <<minutes<< endl;
cout << "time Taken to transfer afile in seconds: " <<timeTaken<< endl;

}

return 0;
}