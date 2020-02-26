#include <iostream>
using namespace std;

/*
- Struktur: adalah kumpulan variabel dari tipe data yang berbeda dengan satu nama.
            Ini mirip dengan kelas di mana, keduanya memiliki kumpulan data dari tipe data yang berbeda.

- Deklarasi Strukct: 
            struct orang
        {
            char nama[250];
            int umur;
            float gaji;
        };

        - Definisi struktur hanya blue print untuk pembuatan variabel.
        - Sehingga ketika struktur dibuat, tidak ada memori yang dialokasikan.
        - Definisi structue hanya menentukan variabel-variabel apa yang telah,
          didefinisikan pada satu variabel structure tersebut.

- Deklarasi Variabel Struktur:
        orang o1;

- Mengakses anggota dari struktur:
    - Anggota variabel struktur dapat diakses dengan operasi (.) titik.
        orang.nama = "Sherlock";
*/
struct Orang
{
    string nama;
    int umur;
    float gaji;
};

int main() {
    // Contoh Strukture:
    cout << "====> Contoh Srtukture <====" << endl;
    Orang o1; // deklarasi variabel struktur

    o1.nama = "Sherlock Holmes";
    o1.umur = 37;
    o1.gaji = 20.50000;


    cout << "Nama: " << o1.nama << endl;
    cout << "Umur: " << o1.umur << endl;
    cout << "Gaji: " << o1.gaji << endl;

    Orang o2; // deklarasi variabel struktur
    cout << "Masukan Nama: ";
    getline(cin, o2.nama);
    cout << "Masukan Umur: ";
    cin >> o2.umur;
    cout << "Masukan Gaji: ";
    cin >> o2.gaji;

    cout << "Nama: " << o2.nama << endl;
    cout << "Umur: " << o2.umur << endl;
    cout << "Gaji: " << o2.gaji << endl;

    
    return 0;
}