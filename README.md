# Program-Language-hw2

This program finds the most frequent character in a user-provided string and prints the character, and how many times it was used.

## How to Compile
To compile the program, use **gcc**:

```
gcc Frequent_Char.c -o frequent_char
```

## How to Run
```
./frequent_char
```

## TestCases

Test 1: <br>
<img src="PL hw2 test case 1.jpg" alt="Alt text" width="500">

Test 2: 

<img src="PL hw2 test case 2.jpg" alt="Alt text" width="500">


## Documentation
```
void find_most_frequent_char(char *str)
```
- *what it does*: Finds the character that occurs most frequently in the given string.
- *Paramenter*: ``char *str`` The string provided by the user.
- *Returns*: This function does not return a value but prints the most frequent character and its occurrence count.
  
```
int main()
```
- *what it does*: The entry point of the program. This function handles user input, calls the ``find_most_frequent_char`` function, and manages the overall flow of the program.
- *Returns*: The program exits with status ``0`` (success).


