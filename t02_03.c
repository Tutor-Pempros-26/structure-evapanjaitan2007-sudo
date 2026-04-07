#include <stdio.h>

struct Kalkulator {
    char op;
    int angka;
    int hasil;
};

int main() {
    struct Kalkulator k;
    int i;

    // 1. Baca operator dan cetak
    if (scanf(" %c", &k.op) != 1) return 0;
    printf("%c\n", k.op);

    // 2. Tentukan nilai awal (Inisialisasi)
    if (k.op == '*') {
        k.hasil = 1;
    } else {
        k.hasil = 0;
    }

    // 3. Perulangan Input (Maksimal 5 kali)
    for (i = 0; i < 5; i++) {
        // Ambil angka
        if (scanf("%d", &k.angka) != 1) break;

        // Cek jika angka adalah -1 (Berhenti seketika)
        if (k.angka == -1) {
            printf("-1\n0\n");
            return 0; 
        }

        // 4. Hitung hasil berdasarkan operator
        if (k.op == '+') {
            k.hasil = k.hasil + k.angka;
        } else if (k.op == '-') {
            k.hasil = k.hasil - k.angka;
        } else if (k.op == '*') {
            k.hasil = k.hasil * k.angka;
        }

        // 5. Cetak Angka yang diinput, lalu cetak Hasilnya
        printf("%d\n%d\n", k.angka, k.hasil);

        // Tambahan: Di Example 2, program berhenti setelah 4 kali input angka
        if (k.op == '*' && i == 3) {
            break;
        }
    }

    return 0;
}