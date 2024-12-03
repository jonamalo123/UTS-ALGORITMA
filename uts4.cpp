#include <iostream>
using namespace std;


float hitungTotal(float total, float hargaBarang) {
    return total + hargaBarang;
}


void tampilkanMenu() {
    cout << " Menu Belanja " << endl;
    cout << "1. Harga barang yang dibeli" << endl;
    cout << "2. Jumlah harga total belanjaan" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih opsi (1-3): ";
}

int main() {
    int pilihan;
    float hargaBarang, totalBelanja = 0.0;

    do {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan harga barang: ";
                cin >> hargaBarang;

                if (hargaBarang > 0) {
                    totalBelanja = hitungTotal(totalBelanja, hargaBarang);
                    cout << " Harga barang senilai " << hargaBarang  << endl;
                } else {
                    cout << "Harga barang tidak valid! Harga harus lebih besar dari 0." << endl;
                }
                break;

            case 2:
                cout << "Total belanja Anda: Rp " << totalBelanja << endl;
                break;

            case 3:
                cout << "Terima kasih! Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak valid, coba lagi!" << endl;
        }

    } while (pilihan != 3);
    return 0;
}
