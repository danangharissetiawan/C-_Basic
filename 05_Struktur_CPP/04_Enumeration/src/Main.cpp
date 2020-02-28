#include <iostream>
using namespace std;

/*
- Enumetation: adalah tipe data yang ditentukan pengguna yang terdiri dari konstanta dan integral,
               dengan kata kunci enum.
*/
// membuat enum
enum hari {senin, selasa, rabu, kamis ,jumat, sabtu, minggu};

// mengubah nilai default enum
enum warna {merah = 4, biru = 3, kuning = 2, hitam = 1, putih = 5};

// Menggunkan enum untuk flags
enum teks {COLOR = 1, BOLD = 5, UNDERLINE = 4, ITALIC = 3 };

int main(int argc, char const *argv[])
{
    // membuat enum
    hari libur;
    libur = minggu;
    cout << "hari ke - " << libur+1 << endl;

    // mengubah nilai default enum
    warna baju_sekolah;
    baju_sekolah = merah;
    cout << "Warna baju sekolah: " << baju_sekolah << endl;

    // menggunakan enum untuk flags
    int myteks = ITALIC  | UNDERLINE;
    cout << myteks << endl;
    if (myteks & BOLD)
    {
        cout << "Semua style teks digunakan" << endl;
        cout << "tebal, miring, garis bawah" << endl;
    }
    
    return 0;
}
