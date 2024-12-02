flproblem5.md
```mermaid
flowchart TD
    A(Start the program) --> B[/Read file size in bytes/]
    B --> C[Initialize  :rate = 960]
    C --> D[Calculate time taken in seconds: time_taken = file_size / rate]
    D --> E[Convert time_taken to days, hours, minutes, and seconds]
    E --> F[days = time_taken / 86400]
    F --> G[hours = time_taken / 3600]
    G --> H[minutes = time_taken /60 ]
    H --> I[seconds = time_taken ]
    I --> J[/Print time taken in days, hours, minutes, and seconds/]
    J --> K(End)