#include <stdio.h>
// Created by Nadya_23343088

int main() {
    int marks[10], i, n, sum = 0, rata_rata;
    
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i) {
        printf("Masukkan nilai %d: ", i + 1);
        scanf("%d", &marks[i]);
        
        sum += marks[i];
    }

    rata_rata = sum / n;
    printf("Rata-rata = %d\n", rata_rata);

    return 0;
}
