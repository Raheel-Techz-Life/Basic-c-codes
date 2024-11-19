// Intermediate C prgms


/* 1. Fibonacci Series ( 34 & 86 )
2. Factorial( 143 & 189 ) 
3. Prime Numbers ( 244 & 308 )
4. Reverse a String ( 372 & 422 )
*/



// case a : without user imput
// case b : with user input





















 // 1. Fibonacci Series ( case a )


#include <stdio.h>

int main() {
    int n = 10; // Number of terms to display
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        } else {
            next = first + second; // Calculate the next term
            first = second;        // Update variables for the next iteration
            second = next;
        }
        printf("%d ", next); // Print the current term
    }

    printf("\n");
    return 0;
}



























 // 1. Fibonacci Series ( case b )




#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        } else {
            next = first + second; // Calculate the next term
            first = second;        // Update variables for the next iteration
            second = next;
        }
        printf("%d ", next); // Print the current term
    }

    printf("\n");
    return 0;
}



























// 2.  Factorial ( case a )


#include <stdio.h>

int main() {
    int number = 5; // Predefined number for which we calculate the factorial
    long long factorial = 1;

    // Calculate the factorial using a loop
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is %lld\n", number, factorial);
    
    return 0;
}




























// 2.  Factorial ( case b )


#include <stdio.h>

int main() {
    int number;
    long long factorial = 1;

    // Asking for user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for negative numbers
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial using a loop
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        // Output the result
        printf("The factorial of %d is %lld\n", number, factorial);
    }

    return 0;
}



























// 3. Prime Numbers ( case a )


#include <stdio.h>

int main() {
    int i, j, isPrime;

    // Define a range to check for prime numbers
    int start = 2, end = 50;

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through each number in the range
    for (i = start; i <= end; i++) {
        isPrime = 1;

        // Check if the number is divisible by any number other than 1 and itself
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        // If the number is prime, print it
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}






























// 3. Prime Numbers ( case b )


#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    // Taking user input for the range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through each number in the range
    for (i = start; i <= end; i++) {
        isPrime = 1;

        // Check if the number is divisible by any number other than 1 and itself
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        // If the number is prime, print it
        if (isPrime == 1 && i > 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}



























// 4. Reverse a String ( case a )


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!"; // Predefined string
    int length = strlen(str);
    int i;

    printf("Original String: %s\n", str);

    // Loop to reverse the string
    printf("Reversed String: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}




























// 4. Reverse a String ( case b )


#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Array to store user input
    int length, i;

    // Taking user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to allow spaces in input

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    printf("Original String: %s\n", str);

    // Loop to reverse the string
    printf("Reversed String: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}



























----XXXXXX------
