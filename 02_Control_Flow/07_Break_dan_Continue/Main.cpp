#include <iostream>
using namespace std;

 //Dalam C++ ada pernyataan kusus untuk mengubah aliran program yaitu break dan continue.

int main()
{
    /*
      - break --> statement untuk mengakhiri sebuah loop(for, while, dan do while)
      - sintaksnya --> break;
      - biasanya break digunakan digunakan di dalam tubuh pernyataan kondisional (if else) didalam loop.
    */
    // contoh: membuat soal metematika kepada user, jika user menjawab benar loop akan berakhir.
    int a = 2,b = 10 ,c = 5,hasil;
    float salah;
    hasil = a * (b + c);
    cout << "\n ----> Latihan break -- Soal matematika <----\n" << endl;

    while(true){
        cout << a << " x " << "( " << b << " + " << c << " ) = ";
        cin >> hasil;
        if(hasil != 30){
            ++salah;
        }else{
            cout << "Jawaban anda benar :) " << endl;
            break;
        }
    }
    cout << "anda melakukan kesalahan " << salah << endl;

    /*
      - continue --> untuk melewati suatu  kondisi tertentu dalam suatu putaran.
      - sintaksnya --> continue;
      - biasanya continue digunakan di dalam pernyataan bersyarat.
     */

    // contoh --> menampilkan bilangan ganjil 1 - 10
    cout << "\n ---> Menampilkan angka ganjil 1 - 110 <---\n" << endl;
    for(int i = 1 ; i < 10; ++i){
        if (i == 2 || i == 4 || i == 6 || i == 8)
        {
            continue;
        }
        cout << i << "\t" << ends;
    }

    return 0;
}