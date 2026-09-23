#include <iostream>
using namespace std;

int main() {
    int n;

    string angka[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };

    cout << "Masukkan angka (0-100): ";
    cin >> n;

    if (n < 0 || n > 100) {
        cout << "Angka harus antara 0 sampai 100." << endl;
    }
    else if (n < 10) {
        cout << angka[n] << endl;
    }
    else if (n == 10) {
        cout << "sepuluh" << endl;
    }
    else if (n == 11) {
        cout << "sebelas" << endl;
    }
    else if (n < 20) {
        cout << angka[n - 10] << " belas" << endl;
    }
    else if (n < 100) {
        cout << angka[n / 10] << " puluh";

        if (n % 10 != 0) {
            cout << " " << angka[n % 10];
        }

        cout << endl;
    }
    else {
        cout << "seratus" << endl;
    }

    return 0;
}