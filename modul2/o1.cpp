#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int nilai[N];
    int total = 0;

    for (int i = 0; i < N; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    int rataRata = total / N;

    int jumlahDiAtas = 0;

    for (int i = 0; i < N; i++) {
        if (nilai[i] > rataRata) {
            jumlahDiAtas++;
        }
    }

    cout << "Rata-rata: " << rataRata << endl;
    cout << "Di atas rata-rata: " << jumlahDiAtas << endl;

    return 0;
}