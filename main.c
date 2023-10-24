#include <stdio.h>

int main() {
    int angka1, angka2;
    int hasil;
    char operasi;

    printf("Menghitung 2 inputan angka dalam Aritmatika\n");

    printf("Pilih operasi (+, -, *, /): ");
    scanf(" %c", &operasi);

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            printf("Hasil penambahan: %d\n", hasil);
            break;

        case '-':
            hasil = angka1 - angka2;
            printf("Hasil pengurangan: %d\n", hasil);
            break;

        case '*':
            hasil = angka1 * angka2;
            printf("Hasil perkalian: %d\n", hasil);
            break;

        case '/':
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                printf("Hasil pembagian: %d\n", hasil);
            } else {
                printf("Pembagian oleh nol tidak valid.\n");
            }
            break;

        default:
            printf("Operasi tidak valid.\n");
    
    }
    return 0;
}
