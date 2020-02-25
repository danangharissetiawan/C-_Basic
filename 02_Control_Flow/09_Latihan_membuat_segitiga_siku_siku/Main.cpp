#include <iostream>
using namespace std;

int main()
{
    cout << "\n----> Latihan Membuat Segitiga Siku Siku <----\n" << endl;
    cout << "Masukan panjang segitiga = ";
    int n;
    cin >> n;

    // ----> Pola pertama
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Pola kedua
    for(int i = 0; i <= n; ++i){
        for(int j = n; j >= i; --j){
            cout << "*";
        }
        cout << endl;
    }

    // ----> Pola ketiga
    for(int i = 0; i <= n; ++i){
        for(int j = n; j >= i; j--){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
    // Pola keempat
    for(int i = 0; i <= n; ++i){
        for(int k = 1; k <= i; k++){
            cout << " ";
        }
        for(int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}