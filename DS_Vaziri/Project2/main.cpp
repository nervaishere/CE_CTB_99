#include <iostream>
#include <unistd.h>
#include "Nodes.h"
using namespace std;
int menu(){
    int M_number = 0;
    system("clear");
    cout << "Here is a list of what you are able to do:\n";
    cout << "Enter a number: (1-9)\n";
    cout <<" \033[1;31m 1) Length of the linked list \033[0m\n";
    cout <<" \033[1;32m 2) Search for an element \033[0m\n";
    cout <<" \033[1;33m 3) Delete an element \033[0m\n";
    cout <<" \033[1;34m 4) Add new element \033[0m\n";
    cout <<" \033[1;35m 5) UPPERCASE the letters \033[0m\n";
    cout <<" \033[1;36m 6) lowercase the letters \033[0m\n";
    cout <<" \033[1;37m 7) Print \033[0m\n";
    cout <<" \033[1;91m 8) Print it in reverse order \033[0m\n";
    cout <<" \033[1;92m 9) EXIT \033[0m\n";
    cin >> M_number;
    return M_number;
}
int main() {
    cout << "Enter the elements of linked list and then press ENTER:\n";
    string element;
    getline(cin, element);
    Nodes *start, *end, *temp;
    Nodes Linkedlist(element[0]);
    start = &Linkedlist;
    end = start;
    int i = 1;
    while (i < element.size()) {
        temp = new (Nodes);
        temp->next = nullptr;
        temp->letter = element[i];
        end->next = temp;
        cout << end->next << endl;
        end = temp;
        ++i;
    }
    cout << end->next << endl;
    Nodes *first = start;
    while (true) {
        switch (int i =menu()) {
            case 1: {
                cout << "\033[1;31m*** Length of the linked list ***\033[0m\n";
                Linkedlist.Length();
                cout << endl;
                sleep(2);
                system("clear");
                break;
            }
            case 2: {
                cout << "\033[1;32m*** Search for an element ***\033[0m\n";
                Linkedlist.Search();
                cout << endl;
                sleep(2);
                system("clear");
                break;
            }
            case 3: {
                cout << "\033[1;33m*** Delete an element ***\033[0m\n";
                Linkedlist.Delete();
                cout << endl;
                sleep(2);
                system("clear");
                break;
            }
            case 4: {
                cout << "\033[1;34m*** Add new element ***\033[0m\n";
                Linkedlist.Add();
                cout << endl;
                sleep(2);
                system("clear");
                break;
            }
            case 5: {
                cout << "\033[1;35m*** UPPERCASE the letters ***\033[0m\n";
                Linkedlist.UPPERCASE();
                cout << endl;
                sleep(2);
                system("clear");
                break;
            }
            case 6: {
                cout << "\033[1;36m*** lowercase the letters ***\033[0m\n";
                Linkedlist.lowercase();
                cout << endl;
                sleep(2);
                system("clear");
                break;
            }
            case 7: {
                cout << "\033[1;37m*** Print ***\033[0m\n";
                Linkedlist.Print(start);
                cout << endl;
                sleep(2);
                system("clear");
                start = first;
                break;
            }
            case 8: {
                cout << "\033[1;91m***Print it in reverse order ***\033[0m\n";
                Linkedlist.reversedPrint(start);
                cout << endl;
                sleep(2);
                system("clear");
                break;
            }
            case 9: {
                cout << "GoodBye! \n";
                sleep(1);

                return 0;
            }
            default:
                menu();
        }
    }
    return 0;
}
