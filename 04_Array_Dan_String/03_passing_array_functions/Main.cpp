#include <iostream>
using namespace std;

// Array 1 dimensi atau multi dimensi dapat di masukan ke fungsi sebagai argument.

// contoh: fungsi dengan array 1 dimensi sebagai argumentnya.
void j_siswa_perkelas(int jumlah[5]);

// contoh: fungsi dengan array 2 dimensi sebagai argumentnya.
void data_siswa(string data[3][2]);

int main() {

    int siswa[5] = {20,32,25,38,40};
    j_siswa_perkelas(siswa);

    string data[3][2] = {
        {"Sherlock", "45"},
        {"Conan", "18"},
        {"Arthur", "75"}
    };
    data_siswa(data);
    return 0;
}


void j_siswa_perkelas(int j[5]) {
    cout << "=====> Contoh 1: Function dengan array 1D sebagai argumrnt <=====" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Kelas " << i + 1 << " ada: " << j[i] << " siswa." << endl;
    }
    
}

void data_siswa(string data[3][2]) {
    cout << "\n=====> Contoh 2: Function dengan array 2D sebagai argumrnt <=====" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama: ";
        for (int j = 0; j < 2; j++)
        {
            cout <<  data[i][j] << "\t";
        }

        cout << endl;
        
    }
    
}