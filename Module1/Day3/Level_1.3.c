#include <stdio.h>
#include <string.h>

int findLargestNumber(int num) {
    char str[5];
    sprintf(str, "%d", num);

    int largest = 0;

    for (int i = 0; i < 4; i++) {
        char temp[4];
        strncpy(temp, str, i);
        strncpy(temp + i, str + i + 1, 3 - i);
        temp[3] = '\0'; 

        int current = atoi(temp); 

        if (current > largest) {
            largest = current;
        }
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);

    printf("Largest number after deleting a single digit: %d\n", largest);

    return 0;
}
