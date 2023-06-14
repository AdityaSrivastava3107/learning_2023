// Biggest of two number using ternary operator 
#include <stdio.h>

int findBiggest(int num1, int num2) {
    int biggest = (num1 > num2) ? num1 : num2;
    return biggest;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int biggest = findBiggest(num1, num2);

    printf("The biggest number is: %d\n", biggest);

    return 0;
}
