#include <iostream>

using namespace std;

/*
Operator Logika ada 3:
 1 - not (!) 
 2 - and (and/&&) = jika ingin menghasilkan true, keduanya harus true.
 3 - or (or/||) = ketika salah satu true, maka hasilnya adalah true.
 */

int main()
{
    int a = 5;
    int b = 3;

    bool hasil;

    // Not (!)
    cout << " * Untuk Not (!)\n";
    cout << (a == 5) << endl; // Hasilnya 1 (True)
    cout << !(a == 5) << endl; // Hasilnya 0 (False)

    // and (&&)
    cout << " * Untuk and (&&)\n";
    hasil = (a == 5) and (b == 3); // True dan True
    cout << hasil << endl;
    hasil = (a == 5) && (b == 2); // True dan False
    cout << hasil << endl;
    hasil = (a == 3) and (b == 3); // False dan True
    cout << hasil << endl;
    hasil = (a == 2) && (b == 5); // False dan False
    cout << hasil << endl;

    // or (||)
    cout << " * Untuk or (||)\n";
    hasil = (a == 5) or (b == 3); // True dan True
    cout << hasil << endl;
    hasil = (a == 5) || (b == 2); // True dan False
    cout << hasil << endl;
    hasil = (a == 3) or (b == 3); // False dan True
    cout << hasil << endl;
    hasil = (a == 2) || (b == 5); // False dan False
    cout << hasil << endl;

    return 0;
}