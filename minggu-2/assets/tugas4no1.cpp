#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char nama[30], alamat[100];
    int nim;

    cout << "Ini adalah program data diri mahasiswa\nSilakan masukkan data : " << endl;
    cout << "\nNama : ";
    cin.getline(nama, sizeof(nama));
    cout << "Alamat : ";
    cin.getline((alamat), sizeof(alamat));
    cout << "NIM : ";
    cin >> nim;

    cout << "\nHasil Tabel :" << endl;
    cout << "================================================\n";

    cout << setiosflags(ios::left) << setw(25) << "Nama";
    cout << setw(13) << "|NIM";
    cout << "|Alamat";

    cout << "\n------------------------------------------------\n";
    cout << setiosflags(ios::left) << setw(25) << nama;
    cout << "|" << setw(12) << nim;
    cout << "|" << alamat << endl;
    cout << "================================================";

    cin.get();
    return 0;
}
