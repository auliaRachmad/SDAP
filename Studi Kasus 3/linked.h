#ifndef linked_H
#define linked_H
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "boolean.h"

#define info(P) (*P)->info
#define next(P) (*P)->next
#define Nil NULL

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList {
	infotype info;
	address  next;
 } ElmtList;
//boolean isEmpty(address P);

address createNode (infotype info);

//void printList (address P);

void insertFirst (address *P, infotype x);

void insertLast (address *P, infotype x);

//void insertBetween (address * P, address PNew);

//void insertBetweenAfter (address * P, address PNew);

//void insertBetweenBefore (address * P, address PNew);

//void insertValueAfter(address * P, infotype value, address PNew);

//void insertValueBefore(address * P, infotype value, address PNew);

void deleteFirst (address *P);

//void deleteLast (address * P);

//void deleteBetween (address * P);

//void deleteBetweenAfter (address * P);

//void deleteBetweenBefore (address * P);

//void deleteValue(address * P, infotype value);

//void deleteOdd(address * P);

//void modifyFirst (address * P);

//void modifyLast (address * P);

//void modifyBetween (address * P);

//void modifyBetweenAfter (address * P);

//void modifyBetweenBefore (address * P);

//void modifyValue(address * P, infotype value);

#endif
