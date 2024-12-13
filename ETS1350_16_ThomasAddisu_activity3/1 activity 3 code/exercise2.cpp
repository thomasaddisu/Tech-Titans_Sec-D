#include <iostream>

using namespace std;

int main(){

    double test,quiz,project,assignments,final_exam;
    double sum=0;

    cout<<"Enter the test score: ";
    cin>>test;
    if (test>15){
    cout<<"test can't be more than 15";
    return 0;}
    cout<<"Enter the quiz score: ";
    cin>>quiz;
    if (quiz>5){
    cout<<"quiz can't be more than 10";
    return 0;}
    cout<<"Enter the project score: ";
    cin>>project;
    if (project>20){
    cout<<"project can't be more than 20";
    return 0;}
    cout<<"Enter the assignments score: ";
    cin>>assignments;
    if (assignments>10){
    cout<<"assignments can't be more than 10";
    return 0;}
    cout<<"Enter the final exam score: ";
    cin>>final_exam;
    if (final_exam>50){
    cout<<"final exam can't be more than 50";
    return
}
    if (sum>=90){
        cout<<"A+";      
    }else if (sum>=80){
        cout<<"A";
    }else if (sum>=75){
        cout<<"B+";
    }else if (sum>=60){
        cout<<"B";
    }else if (sum>=55){
        cout<<"C+";
    }else if (sum>=45){
        cout<<"C";
    }else if (sum>=30){
        cout<<"D";
    }else{
        cout<<"F";
    }

 
    return 0;
}