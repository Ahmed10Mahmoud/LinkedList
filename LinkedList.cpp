// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "linked_List.h"
using namespace std;

int main()
{
        linkedList list;
        while (true) {
            cout <<
                "1-insert at any position \n"
                "2-insert At First \n"
                "3-insert At Last \n"
                "4-Delete first item\n"
                "5-Delete last item\n"
                "6-Check if it empty or not \n"
                "7-give me length \n"
                "8-Display list \n"
                "9-Search for item \n"
                "10-Exit \n";
            "====Enter your Choice==== : \n";
            int choice;
            cin >> choice;
            switch (choice) {
            case 1:
            {
                list.display();
                cout << "Enter numer that you want to insert before it :\n";
                int num;
                cin >> num;
                cout << "Enter New Number :\n";
                int newNum;
                cin >> newNum;
                list.insert_Position(num, newNum);
                cout << "Adedded Succefully\n";
                list.display();
                break;
            }
            case 2:
                cout << "Enter Num: \n";
                int num;
                cin >> num;
                list.insertFirst(num);
                cout << "Adedded Succefully\n";
                list.display();
                break;
            case 3: {
                cout << "Enter Num: \n";
                int num;
                cin >> num;
                list.insertLast(num);
                cout << "Adedd Succefully\n";
                list.display();
                break;}
            case 4: {
                list.display();
                list.deleteFirst();
                cout << "Deleted Succefully\n";
                list.display();
                break;
            }
            case 5: {
                list.display();
                list.deleteLast();
                cout << "Deleted Succefully\n";
                list.display();
                break;
            }
            case 6: {
                if (list.isEmpty())
                    cout << "the list is empty\n";
                else
                    "the list is not empty\n";
                break;
            }
            case 7: {
                cout<<"Number of elements :"<<list.length()<<endl;
            }
            case 8: {
                list.display();
                break;
            }
            case 9: {
                cout << "Enter Num for search: ";
                int num;
                cin >> num;
                if (list.search(num)) {
                    cout << "item is found\n";
                    list.display();
                }
                else {
                    cout << "item not found\n";
                    list.display();
                }
            }
            case 10:
                return 0;
            default:
                cout << "invalid info !\n";
                break;
        }
    }
}


