#include <iostream>
using namespace std;

int main()
{
    // Rumus fibonacci deret = fn = fn1+ fn2
    cout << "\n----> Latihan Membuat Fibonacci Deret <----" << endl;
    int n,fn,fn1,fn2,i;
    fn1 = 1;
    i = 0;
    fn2 = 0;
    // cout << fn2 << endl;
    cout << "Masukan angka fibonacci = ";
    cin >> n;
    do{
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        cout << fn << "\t";
        ++i;

    }while(i < n);
    cin.get();
    return 0;
}