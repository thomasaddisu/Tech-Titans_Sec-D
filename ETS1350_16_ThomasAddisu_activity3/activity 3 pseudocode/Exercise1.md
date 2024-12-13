# Question:
Develop a program that find the Net-Pay of an employee after
deduction of pension (7%) and tax based on tax rate provided. The
program should read the basic salary, worked hours, and bonus
rate. If the employee worked hours exceed 40 hrs., the program
prompts the user to enter an over-time bonus rate/hour




# Pseudocode

1. Start the program
2. Read basic salary, worked hours. 
3. Check the worked hours exceed 40 hrs\
   a.if it's true, 
      read bonus rate\
      calculate extra work hour as work hour -40

    

4. Calculate 
   -pention as basic salary * 0.07\
   -bonus extra hour * bones rate

5. Assign the tax rate based on basic salary\
   A. If basic salary <= 200\
       tax rate = 0\
   B. else if basic salary <= 600\
        tax rate = 0.1\
   C. else if basic salary <= 1200)\
        tax rate = 0.15\
   D. else if basic salary <= 2000\
        tax rate = 0.2\
   E. else if basic salary < 3500\
        tax rate = 0.25;
   F. else\
        tax rate = 0.3;  
6. Calculate
   -tax as basic salary * tax rate\
   -gross salary as basic salary + bonus\
   -net salary as gross salary-pention-tax
7.print net salary
8.closs the program