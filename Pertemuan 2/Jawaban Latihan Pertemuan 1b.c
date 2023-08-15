#include <stdio.h>
#include <string.h>

int main()
{
    char input_kata[100];

    printf("Please input: ");
    fgets(input_kata, sizeof(input_kata), stdin);
    
    input_kata[strcspn(input_kata, "\n")] = 0;

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    char kata[] = \"%s\";\n", input_kata);
    printf("    printf(\"%%s\\n\", kata);\n");
    printf("    getchar();\n");
    printf("    return 0;\n");
    printf("}\n");

    return 0;
}
