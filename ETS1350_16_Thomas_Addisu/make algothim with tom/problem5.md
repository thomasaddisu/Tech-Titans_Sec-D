# file transfer time calculator
## problm analysis
**input** 1.file size \
**output** 1.file transfer time \
**opration** 1.read inputs \
            2.print output \
            3.calculate the time take as time taken = file size/transfer rate \
            4.convert the time taken in seconds to days,hours and minutes as \
                - days = time taken/86400 \
                - hours = time taken/3600 \
                - minutes = time taken/60 
## pseudocode

1. Start the program
2. Read file size (in bytes)
3. Initialize transfer rate to 960 bytes per second (rate = 960)
4. Calculate the time taken in seconds:
   - time_taken = file_size / rate
5. Convert time taken from seconds to days, hours, and minutes:
   - days = time_taken // 86400
   - hours = (time_taken % 86400) // 3600
   - minutes = (time_taken % 3600) // 60
   - seconds = time_taken % 60
6. Print the time taken in days, hours, minutes, and seconds
7. End
    
        