#include <stdio.h>

struct Kalkulator {
    char op;
    int angka;
    int sum;
    int sub;
    int mul;
};

int main() {
    struct Kalkulator k;
    // Langkah 1: Inisialisasi sesuai aturan Poltak
    k.sum = 0;
    k.sub = 0;
    k.mul = 1;
    int i;

    // Langkah 2: Input operator dan langsung cetak
    if (scanf(" %c", &k.op) != 1) return 0;
    printf("%c\n", k.op);

    // Langkah 3 & 4: Perulangan maksimal 5 kali
    for (i = 0; i < 5; i++) {
        if (scanf("%d", &k.angka) != 1) break;

        // Langkah 4: Cek angka sakti -1
        if (k.angka == -1) {
            printf("-1\n0\n");
            return 0; // Langsung keluar program
        }

        // Langkah 5: Operasi berdasarkan operator yang dipilih
        if (k.op == '+') {
            k.sum = k.sum + k.angka;
            printf("%d\n%d\n", k.angka, k.sum);
        } 
        else if (k.op == '-') {
            k.sub = k.sub - k.angka;
            printf("%d\n%d\n", k.angka, k.sub);
        } 
        else if (k.op == '*') {
            k.mul = k.mul * k.angka;
            printf("%d\n%d\n", k.angka, k.mul);
        }

        // Tambahan: Di Example 2, setelah input ke-4 program berhenti
        // Jika ingin membatasi tepat seperti Example 2 (perkalian 4 kali):
        if (k.op == '*' && i == 3) break; 
    }

    return 0;
}