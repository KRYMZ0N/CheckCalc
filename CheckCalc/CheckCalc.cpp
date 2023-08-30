#include <iostream>

#include <iostream>
#include <Windows.h> // sleep
#include <string> // thing for string editing
#include <cmath> // rounding
using namespace std;


void progress() { // function to add a shitty no purpose progress bar lol
    string bar = "Progress: ";
    for (int i = 0; i < 10; i++) {
        bar.push_back('=');
        cout << bar << endl;
        Sleep(400);
    }
}

int main()
{
    string wage; // vars
    string tax;
    string hours;
    double final;

    cout << "Enter your wage! =)\n"; // user input
    cin >> wage;
    cout << "Enter your tax %! =)" << endl;
    cin >> tax;
    cout << "Enter the amount of hours you worked! =)" << endl;;
    cin >> hours;
    cout << "CALCULATING!!!!" << endl;
    progress();

    double wage1 = stod(wage); // making these into doubles
    double tax1 = stod(tax);
    double hours1 = stod(hours);

    final = (wage1 * hours1) / (tax1 / 10);
    final = round(final * 100.00) / 100.00; // rounding stuff
    cout << final;
}
