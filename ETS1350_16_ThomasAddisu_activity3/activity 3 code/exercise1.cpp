#include <iostream>

using namespace std;

int main(){
    double basic_salary,worked_hours,extra_hours,bonus_rate,bonus,pention,tax,gross_salary,net_salary,tax_rate;


    cout << "Enter the basic salary: ";
    cin >> basic_salary;
    cout << "Enter the worked hours: ";
    cin >> worked_hours;
   

    if(worked_hours>40){
        cout<<"enter bonus rate in percent: ";
        cin>>bonus_rate;
        bonus_rate/=100;
        extra_hours=worked_hours-40;
        bonus=extra_hours*bonus_rate;
    }
pention=basic_salary*0.07;

if (basic_salary <= 200) {
        tax_rate = 0;
    } else if (basic_salary <= 600) {
        tax_rate = 0.1;
    } else if (basic_salary <= 1200) {
        tax_rate = 0.15;
    } else if (basic_salary <= 2000) {
        tax_rate = 0.2;
    } else if (basic_salary < 3500) {
        tax_rate = 0.25;
    } else {
        tax_rate = 0.3;
    }

tax=basic_salary*tax_rate;

gross_salary=basic_salary+bonus;

net_salary=gross_salary-tax-pention;

cout<<"Your net salary: "<<net_salary;

    return 0;
}