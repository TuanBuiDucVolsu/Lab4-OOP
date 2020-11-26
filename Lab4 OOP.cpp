#include "tstate.h"
#include<iostream>
using namespace std;

int main()
{
	tstate my_state(25);
	my_state.read_from_file("state.txt");
    state state1("japan", "tokyo", "democratic", "japanese", "none", "asia", 332, 2231);
    int key;
	
    do {
        cout << "Programm C/C++\n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Add state.                                    **\n";
        cout << "**  2. Delete state.                                 **\n";
        cout << "**  3. Show state.                                   **\n";
        cout << "**  4. Write to file.                                **\n";
        cout << "**  5. Find.                                         **\n";
        cout << "**  6. Sum.                                          **\n";
        cout << "**  0. Exit                                          **\n";
        cout << "*******************************************************\n";
        cout << "You choose: ";
        cin >> key;
        switch (key) {
        case 1:
            my_state.add_state(state1);
            break;
        case 2:
            my_state.delete_state(state1);
            break;
        case 3:
            my_state.display_all();
            break;
        case 4:
            my_state.write_to_file("state1.txt");
            break;
        case 5:
            my_state.find("spainish");
            break;
        case 6:
            my_state.Sum("northamerica");
            break;
        case 0:
            break;
        }
    } while (key);
}