# BMI calculator algorithm
## problem anaysis
**input:** \
1.number of person \
2.weight \
3.weight \
**output:** \
1.BMI \
**opration:**
1. read inputs
2. print the BMI 
3. calculate the BMI using BMI = weight / (height *height) 


# Pseudocode

1. Start the program
2. Read the number of persons (num_persons)
3. Initialize counter to 1 (i = 1)
4. Read weight and height for each person
5. Calculate the BMI:
   - BMI = weight / (height * height)
6. Check BMI category: \
   6.1 If 18.5 <= BMI <= 24.9:
       - Print BMI and "normal"
       - Go to step 7 \
   6.2 If BMI > 25: \
       - Print BMI and "overweight" \
       - Go to step 7 \
   6.3 Else: \
       - Print BMI and "underweight" \
       - Go to step 7
7. Update the counter (i = i + 1)
8. Check if counter <= num_persons: \
   8.1 If true, go to step 4 \
   8.2 Else, go to step 9
9. End
