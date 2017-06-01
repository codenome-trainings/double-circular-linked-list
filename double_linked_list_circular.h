//
// Created by Thiago Cunha on 25/05/2017.
//

#ifndef DOUBLE_LINKED_LIST_CIRCULAR_DOUBLE_LINKED_LIST_CIRCULAR_H
#define DOUBLE_LINKED_LIST_CIRCULAR_DOUBLE_LINKED_LIST_CIRCULAR_H

#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
    List* previous;
};



List* init();
List* insertInit(List* list, int data);
List* removeInit(List* list);

List* insertFinish(List* list, int data);
List* removeFinish(List* list);

void display(List* list);
void displayInit(List* list);
void displayFinish(List* list);



bool isEmpty(List* list);
void freeList(List* list);

#endif //DOUBLE_LINKED_LIST_CIRCULAR_DOUBLE_LINKED_LIST_CIRCULAR_H
