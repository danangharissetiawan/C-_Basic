#include <iostream>

using namespace std;

/*
Komparasi = Suatu metode yang digunakan untuk membandingkan data- data yang ditarik dari konklusi baru.
    - Sebanding (==)
    - Tidak sebanding (!=)
    - Kurang dari (<)
    - Lebih dari (>)
    - kurang dari samadengan (<=)
    - lebih dari sama dengan (>=)
 */

int main()
{
    int a = 2;
    int b = 3;

    // Sebanging (==)
    cout << (a == b) << endl;

    // Tidak sebanding (!=)
    cout << (a != b) << endl;

    // Kurang dari (<)
    cout << (a < b) << endl;

    // Lebih dari (>)
    cout << (a > b) << endl;

    // Kurang dari sama dengan (<=)
    cout << (a <= b) << endl;

    // Lebih dari sama dengan (>=)
    cout << (a >= b) << endl;

    /* 
    NB: Ketika hasilnya satu maka adalah True.
        jika hasilnya 0 maka adalah False.
     */

    return 0;
}