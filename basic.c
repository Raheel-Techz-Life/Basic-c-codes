// *Basic programs in C*
/* 1. Hello C program ( line 28)
2. Sum of 2 Numbers ( 53 & 95 )
3. area of circle ( 139 & 184 )
4. Temperature conversion ( 232 & 293 )
*/





















//1. Hello C program

#include <stdio.h> // Include the standard input/output header file

int main() {
    // Print "Hello, World!" to the console
    printf("Hello, World!\n");
    return 0; // Indicate that the program ended successfully
}
















// 2.a. Sum of 2 Numbers ( input from user )

#include <stdio.h> // Include the standard input/output header file

int main() {
    int num1, num2, sum;

    // Ask the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1); // Read the first number

    printf("Enter the second number: ");
    scanf("%d", &num2); // Read the second number

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0; // Indicate that the program ended successfully
}




















//2.b. Sum of 2 Numbers ( given input  )

#include <stdio.h> // Include the standard input/output header file

int main() {
    int num1 = 10; // First specified number
    int num2 = 20; // Second specified number
    int sum;

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0; // Indicate that the program ended successfully
}



























// 3.a. area of circle (given the input)


#include <stdio.h>  // Include the standard input/output header file
#define PI 3.14159   // Define the value of PI

int main() {
    float radius = 5.0; // Specify the radius
    float area;

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Display the result
    printf("The area of a circle with radius %.2f is: %.2f\n", radius, area);

    return 0; // Indicate that the program ended successfully
}



























// 3.b. area of circle (user input)


#include <stdio.h>  // Include standard input/output header file
#define PI 3.14159   // Define the value of PI

int main() {
    float radius, area;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);  // Read the input from the user

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Display the result
    printf("The area of a circle with radius %.2f is: %.2f\n", radius, area);

    return 0; // Indicate that the program ended successfully
}



























//4. Temperature Conversion ( case a ){user input}


#include <stdio.h>

int main() {
    float temperature, convertedTemp;
    int choice;

    // Display menu options
    printf("Temperature Conversion Program\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Perform conversion based on the user's choice
    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemp = (temperature * 9 / 5) + 32; // Conversion formula
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, convertedTemp);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemp = (temperature - 32) * 5 / 9; // Conversion formula
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, convertedTemp);
    } else {
        printf("Invalid choice. Please restart the program and select 1 or 2.\n");
    }

    return 0;
}




























//4. Temperature Conversion ( case a ){given input}



#include <stdio.h>

int main() {
    // Hardcoded input values
    float celsius = 25.0;     // Example Celsius value
    float fahrenheit = 77.0;  // Example Fahrenheit value

    // Conversion formulas
    float celsiusToFahrenheit = (celsius * 9 / 5) + 32;
    float fahrenheitToCelsius = (fahrenheit - 32) * 5 / 9;

    // Output the results
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, celsiusToFahrenheit);
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, fahrenheitToCelsius);

    return 0;
}
