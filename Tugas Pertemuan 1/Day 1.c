#include <stdio.h> //standard input output
#include <stdbool.h>

int main() { //function / method

// printf("Halo. Apa kabar>/n");
// printf("Malam ini belajar bahasa C.");

    char inisial = 'Z'; //deklarasi
    int angka = 100; // inisialisasi
    float PI = 3.14;
    bool diBawahUmur = false;
    char nama[100] = "Avira"; // string / array of char
    // 1 iya / true
    // 0 salah / false

// scanf("%d", &angka);
// inisial = getchar(); // character
// gets(nama); // string
    
    printf("Inisial nama = %c\n", inisial);
    printf("Angka = %d\n", angka); //digit
    printf("PI = %.2f\n", PI);
    printf("Apakah dibawah umur %d\n", diBawahUmur);
    printf("Nama = %s\n", nama);

// putchar(inisial); // character
// puts(nama); // string
// puts("Halo semua.");
// printf("Halo semua.\n");

char a;
char b;

scanf("%c", &a); fflush(stdin);
scanf("%c", &b); getchar();

printf("a = %c\n", a);
printf("b = %c\n", b);

    return 0;
}