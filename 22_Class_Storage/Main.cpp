#include <iostream>
using namespace std;
/*
Bergantung dalam class penyiimpananya, variabel dibagi menjadi 5 tipe:
    1- Variabel lokal
    2- Variabel global
    3- Variabel lokal statis
    4- Register Variabel
    5- Penyimpanan Lokal Thread
 */

// variabel local
void var_loc();

// variabel global
int var = 7;

// variabel local static
void var_stc();

int main()
{
    /*
    1 - Variabel Lokal: Variabel yang didefinisikan pada suatu fungsi,
                        dan cakupanya hanya pada fungsi dimana dia didefinisikan.
                        Secara sederhana variabel ini  hanya bisa diakses di dalam suatu fungsi.
     */
    var_loc();
    cout << "variabel global: " << var << endl; // akan menampilkan variabel global
    int var = 8; // hanya berlaku pda fungsi ini.
    cout << "variabel local: " << var << endl; // menampilkan variabel local

    /*
    2 - Variabel global: Variabel yang didefinisikan diluar fungsi.
                         Cakupan variabel global adalah seluruh program, sehingga varaibel ini bisa diakses dimanapun
                         di dalam tubuh program.
    */
    cout << "variabel local: " << var << endl; // menampilkan variabel local
    cout << "variabel global: " << ::var << endl; // menampilkan variabel global

    /*
    3 - Variabel Local Static: 
            - Variabel local static biasanya ditandai dengan kata kunci static di depan tipe variabel.
            - Variabel local static hanya ada didalam fungsi dimana dia dideklarasikan, seperti variabel local,
            - tapi masa pakai variabel ini hanya berawal saat fungsi berakhir dan berakhir saat fungsi berakhir.
     */

    var_stc(); // ketiga fungsi ini akan menampilkan nilai yang berbeda.
    var_stc();
    var_stc();

    /*
    4 - Register Variabel: Tidak Digunakan dalam C ++ 11)
                - Variabel register bisaanya detentukan oleh kata kunci register,
                - Variabel register mirip dengan variabel otomatis dan hanya ada di dalam fungsi tertentu.
                - Biasanya varialeh ini lebih cepat dari pada variabel local.
                - Namun, kata kunci ini sudah tidak digunakan lagi dalam C ++ 11 dan tidak boleh digunakan.
     */

    /*
    5 - Penyimpanan Lokal Thread:
            - Penyimpanan thread-local adalah mekanisme di mana variabel dialokasikan sedemikian rupa
            - sehingga ada satu instance dari variabel per thread yang masih ada.
            - Kata kunci thread_local digunakan untuk tujuan ini.
     */

    return 0;
}

// Contoh variabel local:
void var_loc(){
    int var = 10; // hanya berlaku pada fungsi ini
    cout << "variabel local dari fungsi var_loc: " << var << endl;
}


// Contoh variabel local static --> ketika fungsi ini di panggil berkali-kali, nilai variabel akan berubah-ubah.
void var_stc(){
    static int var = 20;
    ++var;
    cout << "variabel local dari fungsi var_stc: " << var << endl;
} 