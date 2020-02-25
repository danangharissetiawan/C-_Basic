#include <iostream>
using namespace std;

/*
- If Statment / Pengondisian = untuk pengondisian dalam program
    sintaksnya:
    if (kondisi 1){
        statment 1
    } else if (kondisi 2){
        statement 2
    } else {
        statement 3
    }
    NB: Jika kondisi 1 bernilai True maka statement 1 akan di jalankan, dan kondisi 2 seterusnya akan dilewati.
         jika False, akan mengecek kondisi 2, jika True, statement 2 akan dijalankan.
         jika kondisi 2 bernilai False, maka akan menjalankan statement 3.
 */

int main()
{
    int a = 5;
    int b = 10;

    int hasil;

    cout << a << " + " << b << " = ";
    cin >> hasil;

    if (hasil == a + b){
        cout << "Jawaban anda benar" << endl;
    } else if (hasil > 10){
        cout << "Jawaban anda hampir benar" << endl;
    } else {
        cout << "Jawaban anda Salah" << endl;
    }
    cin.get();
    return 0;
}