#include <stdio.h>

int main() {
    int num1, num2, sum, pro, div;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Adding the numbers
    sum = num1 + num2;
    pro = num1 * num2;
    div = num1 / num2;

    // Displaying the result
    printf("Sum = %d\n", sum);

    return 0;
}

