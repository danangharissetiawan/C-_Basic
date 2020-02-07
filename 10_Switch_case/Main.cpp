#include <iostream>
using namespace std;
/*
Switch Case: Secara global seperti if else, unntuk menjalankan salah satu pernyataan, 
             dari beberapa kemungkinan pernyataan. Namun penggunaan Switch lebih sempit,
            karena perintah ini hanya digunakan untuk memeriksa data yang bertipe integer atau karakter.

Struktur: 
switch(ekspresi):
    case nilai konstanta 1:
        Statment;
        break;
    case nilai konstanta 2:
        Statment;
    case nilai konstanta 3:
        Statment;
    case nilai konstanta 4:
        Statment;
    default:
        statment;

kelemahanya: bila konstanta 1 bernilai true, statement ke satu sampai default akan dijalankan,
             begitu juga seterusnya, bila ingin berhenti di statment 1 bisa, dengan memberi keyword break;.
             ketika semua diberi break apakah tidak lebih baik menggunakan if else?...
 */


int main()
{
    int a = 2;
    int b = 3;
    int hasil;

    cout << a << " + " << b << " = ";
    cin >> hasil;

    switch (hasil)
    {
    case 5:
        cout << "Jawaban anda benar" << endl;
        break;
    
    case 4:
        cout << "jawaban anda hampir benar" << endl;
        break;

    case 6:
        cout << "Jawaban anda mendekati benar" << endl;
        break;
    
    default:
        cout << "Jawaban anda salah" << endl;
        break;
    }
    return 0;
}