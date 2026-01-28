#include <iostream>
using namespace std;

int main() {
    string plat[50], cari;
    int jumlah = 0, pilih;

    do {
        cout << "\n=== PARKIR ===\n";
        cout << "1. Masuk\n";
        cout << "2. Keluar\n";
        cout << "3. Keluar Program\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == 1) {
            cout << "Plat: ";
            cin >> plat[jumlah];
            jumlah++;
            cout << "Masuk berhasil\n";
        }

        else if (pilih == 2) {
            cout << "Plat keluar: ";
            cin >> cari;

            for (int i = 0; i < jumlah; i++) {
                if (plat[i] == cari) {
                    for (int j = i; j < jumlah - 1; j++) {
                        plat[j] = plat[j + 1];
                    }
                    jumlah--;
                    cout << "Keluar berhasil\n";
                    break;
                }
            }
        }

    } while (pilih != 3);

    return 0;
}