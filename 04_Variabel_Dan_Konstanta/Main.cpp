#include <iostream>

using namespace std;

/*
Variabel = adalah suatu pengenal(identifier) yang digunakan untuk mewakili
suatu niali tertentu dalam suatu program dan nilai variabel bisa berubah-ubah.

Konstanta = sama seperti variabel tapi nilainya tidak bisa diubah-ubah.

Aturan Variabel di C++:
1- Tediri dari huruf dan angka dengan karakter pertmama harus herupa huruf. dan bersifan Case Sensitif(nim berbeda dengan Nim)
2- Tidak boleh mengandung spasi.
3- Tidak boleh mengandung simbol-simbol kusus, kecuali garis bawah (underscore)
4- Panjangnya bebas tetapi hanya karakter 32 pertama yang terpakai.

Sintaknya variabel:
tipedata variabel = nilai;

Contoh:
int a = 1;
char b = 'b';

Sintak konstanta:
cons tipedata variabel = nilai;
#define variabel nilai;

Contoh:
const int c = 10;
#define c 10;
 */

int main()
{
    // Variabel
    int a = 10;
    cout << "Nilai dari variabel a adalah " << a << endl;

    const int b = 25;
    cout << "Nilai dari Konstanta b adalah " << b << endl;
    #define c 12.344
    cout << "Nilai dari Konstanta c adalah " << c << endl;
    cin.get();
    return 0;
}