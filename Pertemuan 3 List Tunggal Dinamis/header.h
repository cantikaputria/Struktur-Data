#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct
{
    char nim[10];
    char nama[50];
    char nilai[2];
}nilaiMatKul;

//deklarasi pointernya aja, alokasiin di memori bakal ada pointer, tapi belum di deklarasiin
typedef struct elmt* alamatelmt;

typedef struct elmt
{
    nilaiMatKul kontainer;
    alamatelmt next;        //dipake disini, yg atas ga kepake lagi
} elemen;

typedef struct
{   
    //first adalah pointer yg menunjuk ke elemen
    elemen* first;
}list;

void createList(list *L);
int countElement(list L);
void addFirst(char nim[], char nama[], char nilai[], list *L);
void addAfter(elemen* prev, char nim[], char nama[], char nilai[], list *L);
void addLast(char nim[], char nama[], char nilai[], list *L);
void delFirst(list *L);
void delAfter(elemen* prev, list *L);
void delLast(list *L);
void printElement(list L);
void delAll(list *L);