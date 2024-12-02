try.md
```mermaid
flowchart TD
    A(Start the program) --> B[/Input base and exponent/]
    B --> C{Is base != 0?}
    C --> D[Is exponent > 0?]:::decision
    C -->|No| E[Is exponent > 0?]:::decision
    D -->|Yes| F[result = base ^ exponent]
    D -->|No| G{Is exponent = 0?}
    G -->|Yes| H[result = 1]
    G -->|No| I[result = 1 / base ^ absolut exponent]
    E -->|Yes| J[result = 0]
    E -->|No| K{Is exponent = 0?}
    K -->|Yes| L[result = undefined 0^0 is indeterminate]
    K -->|No| M[result = undefined division by 0 is undefined]
    F --> N[/Print result/]
    H --> N
    I --> N
    J --> N
    L --> N
    M --> N
    N --> O(End)
    
    