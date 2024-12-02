problem1fl.md
```mermaid
flowchart TD
    A(Start the program) --> B[/Read the number of persons num_persons/]
    B --> C[Initialize counter to 1:i = 1]
    C --> D[/Read weight and height for each person/]
    D --> E[Calculate BMI: BMI = weight / height * height]
    E --> F{18.5 <= BMI <= 24.9?}
    F -->|Yes| G[/Print BMI and normal/]
    F -->|No| H{BMI > 25?}
    H -->|Yes| I[/Print BMI and overweight/]
    H -->|No| J[/Print BMI and underweight/]
    G --> K[Update counter:i = i + 1]
    I --> K
    J --> K
    K --> L{Is counter <= num_persons?}
    L -->|Yes| D
    L -->|No| M(End)
