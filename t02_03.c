#include <stdio.h>

/* LANGKAH 1: Struktur Data */
struct Kalkulator {
    char op;
    int angka;
    int hasil;
};

int main() {
    struct Kalkulator k;
    int i;

    /* LANGKAH 3: Memilih Operator */
    scanf(" %c", &k.op);
    printf("%c\n", k.op);

    /* LANGKAH 2: Inisialisasi Nilai Awal */
    if (k.op == '*') {
        k.hasil = 1;
    } else {
        k.hasil = 0;
    }

    /* LANGKAH 4: Perulangan (Maksimal 5 kali input) */
    for (i = 0; i < 5; i++) {
        // Ambil input angka
        if (scanf("%d", &k.angka) != 1) break;

        // Cek jika angka adalah -1 (Berhenti)
        if (k.angka == -1) {
            printf("-1\n0\n");
            return 0; // Matikan program
        }

        // Hitung berdasarkan operator
        if (k.op == '+') {
            k.hasil = k.hasil + k.angka;
        } else if (k.op == '-') {
            k.hasil = k.hasil - k.angka;
        } else if (k.op == '*') {
            k.hasil = k.hasil * k.angka;
        }

        // Cetak Angka yang baru masuk, lalu cetak Hasilnya
        printf("%d\n%d\n", k.angka, k.hasil);

        // Khusus Example 2 (Perkalian berhenti di input ke-4)
        if (k.op == '*' && i == 3) break;
    }

    return 0;
}