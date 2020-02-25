#include <iostream>
using namespace std;

/*
Function Overloading = dua fungsi atau lebih yang memiliki nama yang sama tetapi argumentnya berbeda.
    - fungis ini dimugkninkan memiliki nilai pengembalian yang sama, tetapi argumentnya harus berbeda.
    - ketika nama kedua fungsi dan argumentnya sama, walaupun nilai yang dikembalikan berbeda akan menimbulkan masalah.

 */

// Contoh: Function Overloading tanpa nilai pengembalian. (Prototipe)
void fungsi(int);
void fungsi(float);
void fungsi(int, float);

// Contoh: Function Overloading dengan nilai pengembalian. (Prototipe)
int absolut(int);
float absolut(float);

int main()
{
    int a = -3;
    float b = 3.5;

    fungsi(a);
    fungsi(b);
    fungsi(a, b);

    int c = -7;
    float d = 7.2;

    cout << "Nilai absolut dari " << c << " = " << absolut(c) << endl;
    cout << "Nilai absolut dari " << d << " = " << absolut(d) << endl;

    return 0;
}

// Contoh Function Overloading tanpa nilai kembalian
void fungsi(int var)
{
    cout << var << " = Integer" << endl;
}

void fungsi(float var)
{
    cout << var << " = Float" << endl;
}

void fungsi(int var1, float var2)
{
    cout << var1 << " = Integer" << endl;
    cout << var2 << " = Float" << endl;
}


// Contoh Function Overloading dengan nilai kembalian
int absolut(int var)
{
    if (var < 0)
        var = -var;
    return var;
}

float absolut(float var)
{
    if (var < 0.0)
        var = -var;
    return var;
}