#include <stdio.h>

int main() {
    char nim[11];
    char fullName[50];
    int age;
    float targetGPA;
    
    puts("Welcome to Course-Net");
    puts("-----------------------------------");
    
    // input
    
    printf("Enter NIM           : ");
    scanf("%s", nim);

    printf("Enter full name     : ");
    scanf(" %[^\n]s", fullName);

    printf("Enter your age      : ");
    scanf("%d", &age);

    printf("Enter your GPA target: ");
    scanf("%f", &targetGPA);
    
    // hasil output
    printf("-----------------------------------");
    printf("\nBelow this, they are your data :\n");
    
    printf("\n%-25s: %s\n", "NIM", nim);
    printf("%-25s: %s\n", "Full Name", fullName);
    printf("%-25s: %d\n", "Age", age);
    printf("%-25s: %.2f\n", "Target GPA", targetGPA);;
    
    return 0;
}
