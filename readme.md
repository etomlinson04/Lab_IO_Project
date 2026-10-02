##**Algorithm for LAB_IO_PROJECT**##

Declare variables: inFile, line, tempA, tempB, text, a, b
open data.csv with inFile.open("data.csv")
loop while getline(inFile, line) 
put line iinto a stringstream ss
read from ss up to first comma into tempA
read from ss up to next comma into tempB
read the rest of ss into text
use stringstream on tempA to convert it to the int a
use stringstream on tempB to convert it toi the int b
process a + b
repeat a + b times print text followed by a space after
print a newline
close the file when the loop ends


**EXAMPLE**

open data.csv
while there is another line in the file:
    split line into tempA, tempB, text at the commas
    a = int(tempA)
    b = int(tempB)
    repeat (a + b) times:
        print text and a space
    print newline
close file



