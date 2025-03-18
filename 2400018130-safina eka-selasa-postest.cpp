#include <iostream>
#include <iomanip>

using namespace std;

class KedaiAyam {
private:
    string namaPelanggan;
    int jumlahGoreng, jumlahBakar;
    double totalHarga, diskon;

public:
    // Constructor
    KedaiAyam(string nama, int goreng, int bakar) {
        namaPelanggan = nama;
        jumlahGoreng = goreng;
        jumlahBakar = bakar;
        totalHarga = (goreng * 17000) + (bakar * 21000);
        
        // Cek diskon
        if (totalHarga > 45000) {
            diskon = totalHarga * 0.10;
            totalHarga -= diskon;
        } else {
            diskon = 0;
        }
    }

    // Method untuk menampilkan struk
    void tampilkanStruk() {
        cout << "\n========== STRUK PEMBAYARAN ==========" << endl;
        cout << "Nama Pelanggan  : " << namaPelanggan << endl;
        cout << "Ayam Goreng     : " << jumlahGoreng << " x Rp17.000" << endl;
        cout << "Ayam Bakar      : " << jumlahBakar << " x Rp21.000" << endl;
        cout << "--------------------------------------" << endl;
        cout << fixed << setprecision(2);
        cout << "Diskon 10%      : Rp" << diskon << endl;
        cout << "Total Harga     : Rp" << totalHarga << endl;
        cout << "======================================" << endl;
    }
};

int main() {
    string nama;
    int jumlahGoreng, jumlahBakar;

    // Input dari pengguna
    cout << "Masukkan nama pelanggan: ";
    getline(cin, nama);
    cout << "Masukkan jumlah ayam goreng: ";
    cin >> jumlahGoreng;
    cout << "Masukkan jumlah ayam bakar: ";
    cin >> jumlahBakar;

    // Membuat objek KedaiAyam
    KedaiAyam pelanggan(nama, jumlahGoreng, jumlahBakar);
    
    // Menampilkan struk pembayaran
    pelanggan.tampilkanStruk();

    return 0;
}
