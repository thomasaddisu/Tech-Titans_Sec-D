flproblem4.md
```mermaid
flowchart TD
    A(Start the program) --> B[/Read name, base salary, bonus rate per hour, weekly working hours/]
    B --> C[Initialize pension = 0.05 and tax = 0.15]
    C --> D[Calculate bonus payment = bonus rate per hour * weekly working hours]
    D --> E[Calculate gross salary = base salary + bonus payment]
    E --> F[Calculate tax deduction = gross salary * tax]
    F --> G[Calculate pension deduction = gross salary * pension]
    G --> H[Calculate net salary = gross salary - tax deduction - pension deduction]
    H --> I[/Print net salary, gross salary, and bonus payment/]
    I --> J(End)
