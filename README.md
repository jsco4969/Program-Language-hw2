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
- *Logic*:
1. Initializes an array to count occurrences of each character in the ASCII range (0-127).
2. Iterates through the input string and increments the count for each character based on its ASCII value.
3. Finds the character with the maximum count by iterating through the frequency array.
4. Prints the character with the highest frequency and the number of occurrences.
  
```
int main()
```
- *what it does*: The entry point of the program. This function handles user input, calls the ``find_most_frequent_char`` function, and manages the overall flow of the program.
- *Returns*: The program exits with status ``0`` (success).
- *Logic*:
1. Declares a string variable to hold user input.
2. Prompts the user to enter a string using ``fgets``.
3. Removes the newline character from the input string if it exists.
4. Calls the ``find_most_frequent_char`` function to find and print the most frequent character.



