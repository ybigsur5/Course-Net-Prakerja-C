#include <stdio.h>
#include <stdlib.h>

int main() {
    int userInput;
    while (1) {
        printf("1-100 Number\n");
        printf("----------------------------------\n");
        printf("Input a Number [1..100] : ");
        
        if (scanf("%d", &userInput) != 1) {
            while (getchar() != '\n');
            continue;
        }
        
        if (userInput < 1 || userInput > 100) {
            printf("Input a Number within the range [1..100]\n");
        } else {
            printf("\nYour Number : %d\n", userInput);
            break;
        }
    }
    return 0;
}
