#include <iostream>
using namespace std;

int main() {
    /*
    - Refernce adalah variabel refrensi dari variabel yang direfrensikan.
    - satu refrence hanya boleh dimiliki oleh satu variabel
     */
    string buah = "Apel";
    string roti = "Roti bantal";
    string &makanan = buah; //variabel makanan adalah refrensi dari veriabel buah.

    cout << makanan << endl;
    cout << &makanan << endl << endl;

    makanan = roti; // value var buah di ganti dengan value var roti, tapi alamatnya masih alamat var buah.
                    // jadi var makanan masih menjadi refrensi dari var buah bukan var roti.

    cout << makanan << endl; // roti bantal
    cout << &makanan << endl << endl; // addrs buah

    cout << buah << endl; // roti bantal
    cout << &buah << endl << endl; // adrs buah
    // ketika value dari variabel buah di ubah maka value dari variabel makanan juga berubah, begitu sebaliknya.

    // bukti bahwa var makanan adalah refrensi dari var buah.
    buah = "Durian"; // value var buah diganti menjadi durian.
    roti = "roti slimut"; // value var roti diganti dengan roti selimut.

    cout << buah << endl;       // value variabel buah sama dengan variabel refrencenya yaite makanan.
    cout << &buah << endl << endl; // alamat variabel buah sama dengan variabel makanan.

    cout << makanan << endl; // refrence value dari value variabel buah.
    cout << &makanan << endl << endl; // refrence alamat dari variabel buah.
    return 0;
}