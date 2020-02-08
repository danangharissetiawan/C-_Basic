#include <iostream>
using namespace std;

/*
  * 3 - For Loop
  * sintaksnya:
      for(inisialisai; syarat/kondisi terminasi; increment/decrement/pembaharuan){
          AKSI/CODE
      }
  * Cara Kerja:
     - Pernyataan inisialisasi dijalankan hanya pertama kali di awal.
     - kemudian syarat di periksa.
     - jika syarat bernilai false, for loop diakhiri. Tetapi jika syarat bernilai true,
       aksi/kode akan dijalankan, dan pembaharuan akan dilakukan.
     - Sekali lagi, syarat diperiksa sampai bernilai false, hingga for loop diakhiri.
 */

int main()
{
    int i, n, faktor = 1;
    cout << "Masukan angka: ";
    cin >> n;
    for(i = 1; i <= n; ++i){
        faktor *= i;
        // cout << faktor << endl;
    }
    cout << "\nFaktor dari " << n << " = " << faktor << endl;
    return 0;
}