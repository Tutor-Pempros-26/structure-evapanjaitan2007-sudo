
#include <stdio.h>

struct transaksi {
  int jumlah;
  float harga;
  float total_awal;
  float diskon;
  float total_akhir;
};

int main(){
struct transaksi t;
scanf ("%d", &t.jumlah);
scanf ("%f", &t.harga);

  t.total_awal = (float)t.jumlah * t.harga; 
  if (t.total_awal > 500000) { t.diskon = 0.15 * t.total_awal;}
  else if (t.total_awal >= 100000) {t.diskon = 0.10 * t.total_awal;}
  else if (t.total_awal >50000) {t.diskon = 0.05 * t.total_awal;}
  else {t.diskon = 0;}
  

  t.total_akhir = t.total_awal - t.diskon;

  if (t.diskon > 0) { printf ("%.2f\n", t.diskon);}
  else {printf ("---\n");}

  printf("%.2f\n", t.total_akhir);
  return 0;
}
