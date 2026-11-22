#ifndef QUEUE_H
#define QUEUE_H

// Tipe data elemen Queue
typedef int infotype;

// Struktur Queue menggunakan Array
struct Queue {
    infotype info[5];
    int head;
    int tail;
};

// Deklarasi fungsi dan prosedur
void createQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(Queue Q);

#endif
