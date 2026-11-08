
#include "Doublylist.h"

void CreateList(List &L) {
    L.First = Nil;
    L.Last = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    P->prev = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void insertLast(List &L, address P) {
    if (L.First == Nil) {
        L.First = P;
        L.Last = P;
    } else {
        P->prev = L.Last;
        L.Last->next = P;
        L.Last = P;
    }
}

void printInfo(List L) {
    address P = L.Last;

    while (P != Nil) {
        cout << "no polisi  : " << P->info.nopol << endl;
        cout << "warna      : " << P->info.warna << endl;
        cout << "tahun      : " << P->info.thnBuat << endl;

        P = P->prev;
    }
}

address findElm(List L, infotype x) {
    address P = L.First;

    while (P != Nil) {
        if (P->info.nopol == x.nopol) {
            return P;
        }

        P = P->next;
    }

    return Nil;
}

// Menghapus elemen pertama
void deleteFirst(List &L, address &P) {
    P = L.First;

    if (L.First == L.Last) {
        L.First = Nil;
        L.Last = Nil;
    } else {
        L.First = P->next;
        L.First->prev = Nil;
    }

    dealokasi(P);
}

// Menghapus elemen terakhir
void deleteLast(List &L, address &P) {
    P = L.Last;

    if (L.First == L.Last) {
        L.First = Nil;
        L.Last = Nil;
    } else {
        L.Last = P->prev;
        L.Last->next = Nil;
    }

    dealokasi(P);
}

// Menghapus elemen setelah elemen Prec
void deleteAfter(address Prec, address &P) {
    P = Prec->next;

    Prec->next = P->next;

    if (P->next != Nil) {
        P->next->prev = Prec;
    }

    dealokasi(P);
}

