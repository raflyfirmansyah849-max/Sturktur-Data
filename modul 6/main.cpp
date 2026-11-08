
#include "Doublylist.h"

int main() {
    List L;
    infotype X;
    address P, Q;

    CreateList(L);

    X.nopol = "D001";
    X.warna = "hitam";
    X.thnBuat = 90;
    P = alokasi(X);
    insertLast(L, P);

    X.nopol = "D003";
    X.warna = "putih";
    X.thnBuat = 70;
    P = alokasi(X);
    insertLast(L, P);

    X.nopol = "D004";
    X.warna = "kuning";
    X.thnBuat = 90;
    P = alokasi(X);
    insertLast(L, P);

    X.nopol = "D003";
    Q = findElm(L, X);

    cout << "Masukkan Nomor Polisi yang akan dihapus : "
         << X.nopol << endl;

    if (Q != Nil) {
        if (Q == L.First) {
            deleteFirst(L, Q);
        } else if (Q == L.Last) {
            deleteLast(L, Q);
        } else {
            deleteAfter(Q->prev, Q);
        }

        cout << "Data dengan nomor polisi D003 berhasil dihapus."
             << endl;
    } else {
        cout << "Data kendaraan tidak ditemukan." << endl;
    }

    cout << "\nDATA LIST 1" << endl << endl;

    printInfo(L);

    return 0;
}
