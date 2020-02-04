#include <iostream>

using namespace std;
/*
Tipe data fundamental ada 3:
1- Tipe data angka => untuk angka dan berhubungan dengan operasi aretmatika
    - Bilangan bulat:
        -Integer
        -Long
        -Short
    - Bilangan decimal:
        -Float
        -Double
2- Tipe data Karakter => untuk karakter dan angka tapi tidak berhubungan dengan operasi atermatika
    -Char
3- Tipe data Logika/Boolean => untuk logika benar (True) atau salah (False)
    -Bool

NB: Setiap tipe data memiliki nilai minimum dan maksimum dalam memori yang berbeda-beda.
    - untuk memeriksa besar memori yang digunakan bisa dengan fungsi => sizeof().
    - untuk melihat nilai max => numeric_limits<tipe data>::max()
    - untuk melihat nilai min => numeric_limits<tipe data>::min()
 */

int main()
{
    // Bilangan Bulat 
    int a = 3;  // Integer 4-byte/32-bit
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;

    long b = 5;   // Long 8-byte/64-bit
    cout << b << endl;
    cout << sizeof(b) << " byte" << endl;

    short c = 10;   // Short 2-byte/16-bit
    cout << c << endl;
    cout << sizeof(c) << " byte" << endl;

    // Karakter
    char d = 'a';   // Char 1byte
    cout << d << endl;
    cout << sizeof(d) << " byte" << endl;

    //Boolean(Logika)
    bool e = true;  // Boolean
    cout << e << endl;
    cout << sizeof(e) << " byte" << endl;

    cin.get();
    return 0;
}