#include <iostream>

using namespace std;
/*
Operasi aritmatika:
 - Penjumlahan (+)
 - Pengurangan (-)
 - Perkalian (*)
 - Pembagian (/)
 - Modulus (%) (Sisa hasil bagi) hanya bisa digunakan untuk tipe data integer

 NB: untuk memperoleh hasil pembagian koma, maka salah satu tipe data dari kedua nilai harus float,
     begitupun ketika mendeklarasikan hasil, harus bertipe data float.

     urutan eksekusinya sama persis dengan konsep matematika.
     jika ingin mendahulukan operasi penjumlahan dari pada perkalian bisa menggunakan ().
 */
int main()
{
    int a = 10;
    int b = 4;

    int hasil;

    // Penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // Pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // Perkalian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // Pembagian
    float c = 4;

    hasil = a / c;
    cout << a << " / " << c << " = " << a / c << " ( Salah satu bertipe data float ) " << endl;
    cout << a << " / " << c << " = " << hasil << " ( Semua bertipe integer ) " << endl;

    // Modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // Urutan eksekusi
    hasil = a + c * b;
    cout << a << " + " << c << " * " << b << " = " << hasil << endl;

    int hasil2;
    hasil2 = ( a + c )* b;
    cout << "( " << a << " + " << c << " )" " * " << b << " = " << hasil << endl;
    return 0;
}