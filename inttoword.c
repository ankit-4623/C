#include <stdio.h>
#include <string.h>
#include<stdlib.h>

// Function to convert a single digit into its word representation
char* convertDigitToWord(int digit) {
    switch (digit) {
        case 0:
            return "Zero";
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
        default:
            return ""; // In case of invalid digit
    }
}

// Function to convert a two-digit number into words
char* convertTwoDigitsToWord(int num) {
    char* words[] = {
        "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };
    
    char* result = (char*)malloc(20 * sizeof(char));
    strcpy(result, words[num / 10]);
    
    if (num % 10 != 0) {
        strcat(result, " ");
        strcat(result, convertDigitToWord(num % 10));
    }
    
    return result;
}

// Function to convert a three-digit number into words
char* convertThreeDigitsToWord(int num) {
    char* result = (char*)malloc(40 * sizeof(char));
    strcpy(result, convertDigitToWord(num / 100));
    
    if (num / 100 != 0) {
        strcat(result, " Hundred");
    }
    
    if (num % 100 != 0) {
        strcat(result, " ");
        strcat(result, convertTwoDigitsToWord(num % 100));
    }
    
    return result;
}

// Function to convert a given number into words
char* convertNumberToWords(int num) {
    if (num == 0) {
        return "Zero";
    }
    
    char* result = (char*)malloc(100 * sizeof(char));
    strcpy(result, "");
    
    if (num / 1000 != 0) {
        strcat(result, convertThreeDigitsToWord(num / 1000));
        strcat(result, " Thousand ");
    }
    
    strcat(result, convertThreeDigitsToWord(num % 1000));
    
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    char* words = convertNumberToWords(n);
    printf("%s\n", words);

    free(words);

    return 0;
}
