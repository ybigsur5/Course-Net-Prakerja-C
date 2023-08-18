#include <stdio.h>

int main() {
    int x, y, temp;

    printf("Swap Number\n");
    printf("----------------------------\n");

    printf("Enter X : ");
    scanf("%d", &x);

    printf("Enter Y : ");
    scanf("%d", &y);

    printf("\nBefore Swap\n");
    printf("X : %d\n", x);
    printf("Y : %d\n", y);

    temp = x;
    x = y;
    y = temp;

    printf("Swap process ...\n");

    printf("\nAfter swap\n");
    printf("X : %d\n", x);
    printf("Y : %d\n", y);

    return 0;
}
