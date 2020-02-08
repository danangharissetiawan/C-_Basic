#include <iostream>
using namespace std;

int main()
{
    /*
     ** Increment(Peningkatan) dan Decrement(Penurunan)
         - hanya bekerja pada integer.
         - variabel bisa bertambah dan berkurang dengan nilai 1.
         * preincrement
           - variabel akan ditambahkan atau dikurangi 1 dulu kemudian baru di tampilkan.
         * postincrement
         * - variabel akan di tampilkan dulu baru di tambahkan 1.
     
     */

    // Increment (++)
    int a = 7;
    int b = 7;

    // postincrement (di tampilkan dulu baru di tambahkan 1)
    cout << a << endl;
    cout << a++ << endl; // --> saat ditampilkan nilai belum berubah.
    cout << a << endl;

    // preincrement (di tambahkan 1 dulu baru ditampilkan)
    cout << b << endl;
    cout << ++b << endl; // --> saat di tampilkan nilai sudah berubah.
    cout << b << "\n" << endl;

    // Decrement (--)
    int c = 3;
    int d = 3;

    // postdecrement (di tampilkan dulu baru di kurangi 1)
    cout << c << endl;
    cout << c-- << endl; // --> saat ditampilkan nilai belum berubah.
    cout << c << "\n" << endl;

    //predecrement di kurangi 1 dulu baru ditampilkan)
    cout << d << endl;
    cout << --d << endl; // --> saat di tampilkan nilai sudah berubah.
    cout << d << endl;

    return 0;
}