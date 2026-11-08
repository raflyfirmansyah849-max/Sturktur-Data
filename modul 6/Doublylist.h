
#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <string>
using namespace std;

#define Nil NULL

// Tipe data kendaraan
typedef struct {
    string nopol;
    string warna;
    int thnBuat;
} infotype;

// Deklarasi address
typedef struct ElmList *address;

// Struktur elemen Doubly Linked List
struct ElmList {
    infotype info;
    address next;
    address prev;
};

// Struktur List
struct List {
    address First;
    address Last;
};

// Deklarasi fungsi dasar
void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertLast(List &L, address P);

// Fungsi pencarian (Nomor 2)
address findElm(List L, infotype x);

// Prosedur penghapusan (Nomor 3)
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);

#endif
