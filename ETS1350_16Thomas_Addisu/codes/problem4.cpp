#include<iostream>
#include<string>
using namespace std;
const float pension=0.05;
const float tax= 0.15;

int main(){
    string name;
    int weeklyworking_hour;
    float pension_deduction, tax_deduction, bonus_payment, gross_salary, net_salary, bonus_rateperhour, base_salary;

    cout<<"Enter full name: ";
    getline(cin, name);

    cout<<"Enter the base salary: ";
    cin>>base_salary;

    cout<<"enter weekly working hour: ";
    cin>>weeklyworking_hour;
    
    cout<<"Enter bonus rate per hour: ";
    cin>>bonus_rateperhour;

     //differnt opration
        bonus_payment = weeklyworking_hour * bonus_rateperhour;
        gross_salary = base_salary + bonus_payment;
        pension_deduction = gross_salary * pension;
        tax_deduction = gross_salary * tax;
        net_salary = gross_salary -(pension_deduction + tax_deduction);

            cout<<name<<endl
                <<"Net salary: "<<net_salary<<endl
                <<"bonus payment: "<<bonus_payment<<endl
                <<"gross salary: "<<gross_salary;
   
   
    return 0;        

}