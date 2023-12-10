#include <stdio.h>
// Created by Nadya_23343088

int main() {
    // membuat array
    int nilai[5] = {33, 22, 11, 44, 21};
    
    // mengambil banyaknya isi array
    int length = sizeof(nilai) / sizeof(*nilai);
    
    printf("Banyaknya isi array nilai: %d\n", length);

    return 0;
}
