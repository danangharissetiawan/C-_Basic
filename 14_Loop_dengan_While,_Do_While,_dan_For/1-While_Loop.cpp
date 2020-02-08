#include <iostream>
using namespace std;
/*
  ** Loop dalam pemrograman digunakan untuk mengulang blok kode tertentu.
  ** Loop ada 3 jenis:
     1 - while loop
     2 - do while loop
     3 - for

    * 1 - While Loop
    * sintaksnya :
        while(sarat){
           AKSI
        }
    * Cara Kerja :
      - syarat di chek/di evaluasi terlebih dahulu.
      - jika syarat bernilai true, aksi akan dijalankan.
      - kemudian syarat di evaluasi lagi, jika masih bernilai true, program akan tetap dijalankan.
      - sampai syarat bernilai false, dan saat syarat bernilaifalse while loop diakhiri.
 */


int main()
{
    /*
        int a = 7;
        while(a <= 10){
            cout << "nilai a = " << a << endl;
        }   
        *** jika kode program hanya begini maka looping tidakakan pernah akhir,
            untuk mengakhiri looping kita harus mengasih kondisi dimana syarat bernilai false.
            seperti : mengasih penambahan nilai saat loop dilakukan, dengan decrement atau operasi artimaika, dll.
     */

    int a = 7;
    while(a <= 10){
        cout << "nilai a = " << a << endl;
        // ++a;
        // a += 1;
        a += 2;

    }

    int angka, i = 1;
    cout << "Masukan angka :";
    cin >> angka;
    while(i <= angka){
        cout << "angka sekarang adalah " << i << endl;
        ++i;
    }
    cout << "angka yang anda masukan adalah " << angka << endl;
    cout << "loping berhenti sesuai dengan angka yang anda masukan." << endl;
    return 0;
}