#include <stdio.h>
#include <string.h>

int main() {
    char nama[100];
    char alamat[100];
    int kodePos;
    char provinsi[100];
    char nomorTelepon[20];
    int totalBiaya = 0;
    
    printf("Welcome to Course-Net\n");
    printf("=====================\n");
    
    printf("Masukan nama lengkap anda : ");
    fgets(nama, sizeof(nama), stdin);
    
    printf("Masukan alamat anda : ");
    fgets(alamat, sizeof(alamat), stdin);
    
    printf("Masukan kode pos anda : ");
    scanf("%d", &kodePos);
    
    printf("Masukan provinsi anda : ");
    scanf(" %99[^\n]", provinsi);
    
    printf("Masukan nomor telefon anda : ");
    scanf("%s", nomorTelepon);
    
    printf("\n\n\n\n");
    
    printf("Hello %s,", nama);
    printf("\nList program pembelajaran yang tersedia [1 untuk ambil / 0 untuk tidak]:\n");
    printf("1. Algoritma dan pemrograman (Rp. 500000) : ");
    int pilihan;
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        totalBiaya += 500000;
    }
    
    printf("2. Database System (Rp. 1000000) : ");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        totalBiaya += 1000000;
    }
    
    printf("3. Computer Network (Rp. 1500000) : ");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        totalBiaya += 1500000;
    }
    
    printf("4. OOP (Rp. 2000000) : ");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        totalBiaya += 2000000;
    }
    
    printf("5. Android (Rp. 2500000) : ");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        totalBiaya += 2500000;
    }
    
    printf("\n\n\n\n");
    
    printf("Hello %s,", nama);
    printf("\nNama lengkap : %s", nama);
    printf("Alamat : %s", alamat);
    printf("Kode Pos : %d\n", kodePos);
    printf("Provinsi : %s\n", provinsi);
    printf("No. Telp : %s\n", nomorTelepon);
    printf("Total Biaya Kursus : Rp. %d,-\n", totalBiaya);
    printf("Terima kasih telah bergabung dengan Course-Net !!\n");
    
    return 0;
}
