//
// Created by Thiago Cunha on 25/05/2017.
//

#include "double_linked_list_circular.h"

List* init() {
    return NULL;
}

void freeList(List* list) {

    if (isEmpty(list)) return;

    do {
        free(list);
        list = list->next;
    } while (list->previous != list);

}

List* insertInit(List* list, int data) {

    List* temp = (List *) malloc (sizeof(List));
    temp->data = data;

    if (isEmpty(list)) {
        temp->previous = temp;
        temp->next = temp;
        return temp;
    }

    temp->next = list;
    temp->previous = list->previous;
    list->previous->next = temp;
    list->previous = temp;
    list = temp;

    cout << "Data was inserted with sucessfully!" << endl;

    return list;

}

List* insertFinish(List* list, int data) {

    List* temp = (List *) malloc (sizeof(List));
    temp->data = data;


    if (isEmpty(list)) {
        temp->previous = temp;
        temp->next = temp;
        return temp;
    }

    temp->next = list;
    list->previous->next = temp;
    temp->previous = list->previous;
    list->previous = temp;

    cout << "Data was inserted with sucessfully!" << endl;

    return list;

}

void displayInit(List* list) {
    if (isEmpty(list)) {
        cout << "Your list is empty." << endl;
        return;
    }
    cout << "Display Init: " << list->data << endl;
}

void displayFinish(List* list) {
    if (isEmpty(list)) {
        cout << "Your list is empty." << endl;
        return;
    }
    cout << "Display finish: " << list->previous->data << endl;

}

void display(List* list) {

    if (isEmpty(list)) {
        cout << "Your list is empty." << endl;
        return;
    }

    List* p = list;
    cout << "[ ";
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != list);
    cout << " ]" << endl << endl;

}

List* removeInit(List* list) {

    if (isEmpty(list)) {
        cout << "Your list is empty." << endl;
        return list;
    }

    if ( (list->previous == list) && (list->next == list) ) {
        free(list);
        return NULL;
    }

    List* p = list->next;
    p->previous = list->previous;
    list->previous->next = p;
    list = p;

    cout << "Data was removed with successfully!" << endl;

    return list;

}


List* removeFinish(List* list) {

    if (isEmpty(list)) {
        return NULL;
    }

    if ( (list->previous == list) && (list->next == list) ) {
        free(list);
        return NULL;
    }

    List* p = list->previous;
    p->previous->next = list;
    list->previous = p->previous;

    free(p);

    cout << "Data was removed with successfully!" << endl;

    return list;

}

bool isEmpty(List* list) {
    return list == NULL;
}


