#include <stdio.h>
#include <string.h>
#include <ctype.h>

void applyRules(char *input) {
    int length = strlen(input);

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            input[i] = toupper(input[i]);
        } else {
            input[i] = tolower(input[i]);
        }
    }
}

int main() {
    char input[100];
    
    printf("Odd Upper and Even Lower\n");
    printf("---------------------------------\n");
    
    printf("Input Words : ");
    fgets(input, sizeof(input), stdin);
    
    input[strcspn(input, "\n")] = '\0';
    
    applyRules(input);
    
    printf("Your Words : %s\n", input);
    
    return 0;
}
