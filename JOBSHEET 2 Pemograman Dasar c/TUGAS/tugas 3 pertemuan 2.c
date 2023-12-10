#include <stdio.h>

// Created by 23343088_Nadya

int main() {
    // Deklarasi variabel
    float panjang_alas = 8.0;
    float tinggi = 5.0;      
    float luas;

    // Menghitung luas segitiga
    luas = 0.5 * panjang_alas * tinggi;

    // Menampilkan hasil menghitung luas segitiga
    printf("Panjang Alas = %.2f cm\n", panjang_alas);
    printf("Tinggi = %.2f cm\n", tinggi);
    printf("Maka Luas Segitiga Adalah %.2f cm^2\n", luas);
    
    return 0;
}