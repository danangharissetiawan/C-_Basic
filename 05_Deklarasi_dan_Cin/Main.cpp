#include <iostream>

using namespace std;

/*
Deklarasi adalah menuliskan variabel tanpa adanya nilai.
Contoh:
int a;

a = 10;

cin (console in) = Memasukan niali dari console.
Contoh:
int a;
cin >> a;
 */

int main()
{
    int a;  // Deklarasi
    a = 10; // memberi nilai.
    cout << "Nilai dari deklarasi variabel a adalah " << a << endl;
    
    int b; // Deklarasi
    cout << "Masukan nilai b: ";
    cin >> b; // memberi nilai dari console.
    cout << "Nilai yang anda masukan adalah " << b << endl;

    cin.get();
    return 0;
}