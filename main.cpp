#include <iostream>
#include <map>
#include <string>

using namespace std;

// Fungsi Menu
void tampilkanMenu() {
    cout << "\n===== Kamus Mini =====" << endl;
    cout << "1. Tambah Kata" << endl;
    cout << "2. Cari Arti Kata" << endl;
    cout << "3. Tampilkan Semua Kata" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih opsi: ";
}

// Fungsi nambahin kata
void tambahKata(map<string, string>& kamus) {
    string kata, arti;
    cout << "\nMasukkan kata: ";
    cin.ignore(); 
    getline(cin, kata);
    cout << "Masukkan arti: ";
    getline(cin, arti);
    kamus[kata] = arti;
    cout << "Kata berhasil ditambahkan!\n";
}
