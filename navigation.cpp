//
// Created by Thiago Cunha on 25/05/2017.
//

#include "navigation.h"
#include "double_linked_list_circular.h"
#include "conio.h"


List* list = init();

void menu() {

    cout << "1. Insert header list" << endl;
    cout << "2. Insert finish list" << endl;
    cout << "3. Remove header list" << endl;
    cout << "4. Remove footer list" << endl;
    cout << "5. Display header" << endl;
    cout << "6. Display footer" << endl;
    cout << "7. Full Display" << endl;
    cout << "0. Exit program" << endl;

    char choice = ' ';
    cout << "Enter one number... ";
    fflush(stdin);
    choice = getch();
    cout << endl;

    switch (choice) {

        case '0':
            freeList(list);
            return;

        case '1':
            list = insertInit(list, enterNumber());
            break;

        case '2':
            list = insertFinish(list, enterNumber());
            break;

        case '3':
            list = removeInit(list);
            break;

        case '4':
            list = removeFinish(list);
            break;

        case '5':
            displayInit(list);
            break;

        case '6':
            displayFinish(list);
            break;

        case '7':
            display(list);
            break;

        default:
            cout << "Invalid Option. Try again" << endl;
            cout << "Press Enter for continue..." << endl;
            getch();

    }

    menu();

}

int enterNumber() {

    int data;

    cout << "Enter a integer number: ";
    cin >> data;

    return data;

}