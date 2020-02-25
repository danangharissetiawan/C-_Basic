#include <iostream>
using namespace std;

/*
    - Dalam pemrograman fungsi mengacu pada segmen yang mengelompokan kode untuk melakukan tugas tertentu.
    - fungsi ada 2 jenis:
      1 - fungsi perpustakaan
      2 - fungsi yang dibuat oleh pengguna

      * Fungsi Perpustakaan = fungsi bawaan dalam pemrograman C++. programmer dapat menggunakan fungsi perpustakaan
                              dengan menjalankan fungsi secara langsung.
      * contoh:
          menggunakan file header(standart library C++) <cmath> yang di dalamnya terdapat berragam fungsi matematik.
          library cmath : referensi www.cpprefrence.com
          ceil(X)       <-- pembulatan ke atas
          cos(x)        <-- cosinus
          exp(x)        <-- eksponen
          fabs(x)       <-- nilai absolut dalam float
          floor(x)      <-- pembulatan kebawah
          fmod(x)       <-- modulus dalam float
          log(x)        <-- logaritma dengan basis natural
          log10(x)      <-- logaritma dengan basis 10
          pow(x,y)      <-- x pangkat y
          sin(x)        <-- sinus
          sqrt(x)       <-- akar kuadrat
          tan(x)        <-- tangen
 */

// #include <cmath>

// Contoh dari fungsi perpustakaan.

// int main()
// {
//     double angka, akar;
//     cout << "Akar kuadrat dari nilai (x): ";
//     cin >> angka;
//     akar = sqrt(angka); // fungsi sqrt dipanggil untuk menghitung akar kuadrat.
//     cout << "\nHasil akar kuadrat dari " << angka << " = " << akar << endl;
//     return 0;
// }

/*
    * Fungsi yang dibuat manual
      - fungsi yang dibuat manual untuk melakukan tugas tertentu.
      - fungsi bisa di panggil di bagian mana pun di dalam program.
      * Cara Kerja:
          - 

 */

// Contoh:
int tambah(int, int); // deklarasi fungsi
/*
- prototipe fungsi (deklarasi)
  - deklarasi fungsi tanpa badan untuk memberikan informasi kompilator tentang fungsi yang ditentukan pengguna.
  - deklarasi fungsi harus di definisikan sebelum main, 

  NB: Tidak perlu menambahkan prototipe fungsi/deklarasi fungsi, jika fungsi berada sebelum fungsi main()
 */

int main()
{
    int a1, a2, jumlah;
    cout << "Masukan 2 angka yang ingin anda jumlahkan: ";
    cin >> a1 >> a2;

    // Memanggil fungsi add
    jumlah = tambah(a1, a2);
    /*
    - untuk menjalankan kode" tubuh fungsi, fungsi yang di buat oleh pengguna perlu di panggil.
    - diatas adalah contoh pemanggilan fungsi tambah() di dalam fungsi main().
     */

    cout << "Hasil dari " << a1 << " + " << a2 << " = " << jumlah << endl;
    return 0;
}


// Definisi fungsi
int tambah(int a, int b)
{
    int tambah;
    tambah = a + b;

    return tambah;
}

/*
- code dalam tubuh fungsi dijalankan secara berurutan.
* Argument(parameter) fungsi ada 2:
  - argumen aktual --> argumen yang dikirimkan ke fungsi saat fungsi di panggil. contoh = a1, a2
  - argument formal --> argumen yang berada di definisi fungsi, yang menjadi inisialisasi dari argument aktual. 
                        contoh = (a, b) yang berada di definisi fungsi.

  NB: - jumlah argumen aktual dan argument formal harus sama. kecuali function overloading.
      - tipe argument aktual harus sama dengan argument formal.
      - anda dapat mengosongkan argumen, hal ini disebut argument default.
      - anda boleh membedakan tipe argument ketika argument lebih dari satu.
 */
