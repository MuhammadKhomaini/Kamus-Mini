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
// Fungsi untuk mencari arti kata
void cariKata(const map<string, string>& kamus) {
    string kata;
    cout << "\nMasukkan kata yang ingin dicari: ";
    cin.ignore(); // Membersihkan buffer input
    getline(cin, kata);
    auto it = kamus.find(kata);
    if (it != kamus.end()) {
        cout << "Arti dari \"" << kata << "\": " << it->second << endl;
    } else {
        cout << "Kata tidak ditemukan dalam kamus.\n";
    }
}

// Fungsi untuk menampilkan semua kata dalam kamus
void tampilkanSemuaKata(const map<string, string>& kamus) {
    if (kamus.empty()) {
        cout << "\nKamus kosong.\n";
    } else {
        cout << "\nDaftar semua kata dalam kamus:\n";
        for (const auto& pasangan : kamus) {
            cout << pasangan.first << ": " << pasangan.second << endl;
        }
    }
}
// Fungsi utama
int main() {
    map<string, string> kamus;
    int pilihan;

    do {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahKata(kamus);
                break;
            case 2:
                cariKata(kamus);
                break;
            case 3:
                tampilkanSemuaKata(kamus);
                break;
            case 4:
                cout << "Terima kasih telah menggunakan Kamus Mini.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
        }
    } while (pilihan != 4);

    return 0;
}
