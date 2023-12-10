#include <stdio.h>

// Created by Nadya_23343088

int main() {
    printf("== program pembayaran ==\n");
    
    int total_belanja = 0;

    printf("Inputkan total belanja: ");
    scanf("%i", &total_belanja);

    // menggunakan blok percobaan if
    if (total_belanja > 100000) {
        printf("Selamat, Anda mendapatkan hadiah!\n");
    }

    printf("Terimakasih sudah berbelanja di toko kami\n\n");

    return 0;
}
