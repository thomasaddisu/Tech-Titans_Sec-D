# power calculator
## problem analysis
**input** \
         1.base \
         2.exponent \
**output** \
         1.power \
**opration** \
            1.read inputs \
            2.print output \
            3.calculate power as power = base^exponent 

## pseudocode
1. Start the program
2. Input base and exponent
3. If base != 0 then
   1. If exponent > 0 then: \
        result = base ^ exponent
   2. Else if exponent = 0 then: \
        result = 1
   3. Else (exponent < 0): \
        result = 1 / (base ^ absolute(exponent))
4. Else if base = 0 then
   1. If exponent > 0 then: \
        result = 0
   2. Else if exponent = 0 then: \
        result = undefined (0^0 is indeterminate)
   3. Else (exponent < 0): \
        result = undefined (division by 0 is undefined)
5. Print result
6. End