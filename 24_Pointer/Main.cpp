#include <iostream>
using namespace std;
/*
 - pointer: - variabel yang menyimpan alamat variabel lain sebagai nilainya.
            - sebuah pointer merujuk pada tipe data (string atau int) dari tipe data yang sama,
            - dan dibuat dengan operator *.
 */

int main() {

    string buah = "anggur"; // variabel dengan nilai
    cout << buah << endl;

    string * adrs = &buah; // pointer yang memiliki nilai dan alamat variabel buah
    cout << &buah << endl; // (&) operator alamat (alamat)
    cout << *adrs << endl; // (*) operator derefrence (nilai dari variabel buah)
    cout << adrs << endl;

    string v_adrs = *adrs; // variabel v_adrs menyimpan nilai dari pointer
    cout << v_adrs << endl;

    // Deklaraasi pointer
    // Contoh 1
    string makanan, benda; // deklarasi variabel
    string * my_ptr; // deklarasi pointer

    my_ptr = &makanan; // memasukan alamat variabel makanan ke pointer
    *my_ptr = "Nasi Goreng"; // memasukan nilai variabel makanan ke pointer

    my_ptr = &benda;
    *my_ptr = "Buku";

    cout << "Makanan: " << makanan << endl;
    cout << "Benda: " << benda << endl;

    // Contoh 2
    int v1 = 10, v2 = 15;
    int * p1, * p2;

    p1 = &v1; //p1 --> alamat dari v1
    p2 = &v2; //p2 --> alamat dari v2
    *p1 = *p2; // nilai p1 di ganti menjadi p2
    p1 = p2; // alamat p2 di copy ke p1
    *p2 = 30; // nilai p2 diganti menjadi 30

    cout << "v1: " << v1 << endl; // menjadi nilai dari v2
    cout << "v2: " << v2 << endl; // menjadi 30 

    return 0;
}