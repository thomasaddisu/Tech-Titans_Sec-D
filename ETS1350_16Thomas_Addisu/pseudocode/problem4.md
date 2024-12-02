# salary calculator

## problem analysis

**inputs** \
        1.base salary \
        2.bonus rate per hour \
        3.weekly working hour \
        4.name \
**outputs** \
         1.gross salary \
         2.bonus payment \
         3.net payment \
 **opration** \
            1 read inputs \
            2.print outputs \
            3.calculate bonus payment as bonus payment = bonus rate perhour* weekly working hours \
            3.calculate gross salary as goss salary = base salary + bonus payment \
            4.calculate net salary as net salary = gross salary -(tax deduction + pension deduction)

## psedocode

1.start the program \
2.read name,base salary,bonus rate per hour,weekly working hour \
3.initialize pension and tax to 0.05 and 0.15 respectively \
4.calculate bonus payment as  bonus payment = bonus rate perhour* weekly working hours \
5.calculate gross salary as gross salary = base salary + bonus payment \
6.calculate tax deduction as tax deduction = gross salary * tax \
7.calculate pension deduction as pension deduction=gross salary * pension \
8.calculate net salary as net salary = gross salary -(tax deduction + pension deduction) \
9.print the net salary,gross salary and bonus payment \
10.end   

