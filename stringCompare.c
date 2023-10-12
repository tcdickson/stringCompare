//(Comparing Strings) Write a program that uses function strcmp to compare two strings input by the user. The program should state whether the first string is less than, equal to or greater than the second string.

// C Libraries
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // setting the string memory limit to 200 characters
    char stringOne[200];
    char stringTwo[200];
    // program explaination
    printf("This Program compares two inputted strings.\nType in your first string and press enter\n");
    // entering a loop to continue entering numbers if incorrect entry type
    while (true)
    {
        printf("Enter first string\n");
        // contitional logic using the fgets to read characters from stdin as an array of char stringOne until newline or EOF is encountered
        if (fgets(stringOne, sizeof(stringOne), stdin) != NULL)
        {
            // conditional logic if the sting at position 0 is a newline - print "invalid entry"
            if (stringOne[0] == '\n')
            {
                printf("Invalid entry for first string");
                continue;
            }
            break;
        }
    }
    // entering a loop to continue entering numbers if incorrect entry type
    while (true)
    {
        printf("Enter second string\n");
        // contitional logic using the fgets to read characters from stdin as an array of char stringTwo until newline or EOF is encountered
        if (fgets(stringTwo, sizeof(stringTwo), stdin) != NULL)
        {
            if (stringTwo[0] == '\n')
            {
                // conditional logic if the sting at position 0 is a newline - print "invalid entry statement"
                printf("Invalid entry for second string");
                continue;
            }
            break;
        }
    }
    // using strcmp to determine if the two strings are equal or not
    int result = strncmp(stringOne, stringTwo, 10);
    if (result == 0)
    {
        printf("Strings are equal\n");
    }
    else if (result < 0)
    {
        printf("String 1 is less than String 2\n");
    }
    else
    {
        printf("String 1 is greater than String 2\n");
    }
    return 0;
}