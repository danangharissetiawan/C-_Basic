#include <iostream>
using namespace std;

int main()
{
    // Assigment
    float a = 10;
    float b = 3;

    // Assigment Operator: (semua operasi aritmatika)
    /*
        variabel = nilai_variabel operasi ekpresi
        a        =        10         +       5

        jika menggunakan assigment operator bisa di buat lebih mudah,
        contoh: a += 5;
     */
    cout << "Nilai awal a = " << a << endl;

    a += b;
    cout << " ditambah " << b << " = " << a << endl;

    a -= b;
    cout << " dikurang " << b << " = " << a << endl;

    a *= b;
    cout << " dikali " << b << " = " << a << endl;

    a /= b;
    cout << " dibagi " << b << " = " << a << endl;

    int c = 10;
    cout << "Nilai awal c " << " = " << c << endl;
    c %= 3;
    cout << " dimodulus " << 3 << " = " << c << endl;

    return 0;
}