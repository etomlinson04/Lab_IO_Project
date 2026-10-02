## Algorithm for LAB_IO_PROJECT

```
Declare variables: inFile, line, tempA, tempB, text, a, b
Open data.csv with inFile.open("data.csv")
If the file did not open, print an error and stop it
Loop while getline(inFile, line) 
  Put line into a stringstream ss
  Read from ss up to first comma into tempA
  Read from ss up to next comma into tempB
  Read the rest of ss into text
  Use stringstream on tempA to convert it to the int a
  Use stringstream on tempB to convert it to the int b
  Compute a + b
  Repeat a + b times print text followed by a space after
  Print a newline
Close the file when the loop ends
```

## Pseudocode summary

```
open data.csv
while there is another line in the file:
    split line into tempA, tempB, text at the commas
    a = int(tempA)
    b = int(tempB)
    repeat (a + b) times:
        print text and a space
    print newline
close file
```


