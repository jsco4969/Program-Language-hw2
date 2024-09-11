#include <stdio.h>
#include <string.h>
#define ASCII_SIZE 128


// Function to find the most frequent char in the string
void find_most_frequent_char(char *str) {
    int count[ASCII_SIZE] = {0};  // Array to store frequency of each char
    int max_count = 0;            // Store the maximum count
    char most_frequent_char;      // Store the most frequent char

    // Iterate over each char in the string
    for (int i = 0; i < strlen(str); i++) {
        count[(int)str[i]]++;  // Increment the count of the char
    }


    // Find the char with the highest count
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            most_frequent_char = (char)i;
        }
    }


    // Output the most frequent char and it's count
    printf("'%c' occurs %d times\n", most_frequent_char, max_count);
}


int main() {
    char str[100];  // Declare a string to store user input

    // Ask the user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Use fgets to safely read the string

    // Remove the newline char from the input
    str[strcspn(str, "\n")] = '\0';

    //Call function to find and print the most frequent char
    find_most_frequent_char(str);

    return 0;
}
