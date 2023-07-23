#include <iostream>
#include <string>
using namespace std;
int main() {
    string noun, verb, adjective;

    cout << "Welcome to Mad Libs!" << endl;

    cout << "Enter a noun: ";
    cin >> noun;

    cout << "Enter a verb: ";
    cin >> verb;

    cout << "Enter an adjective: ";
    cin >> adjective;

    cout << endl;

    cout << "Once upon a time, there was a " << adjective << " " << noun << "." << endl;
    cout << "It loved to " << verb << " all day long." << endl;
    cout << "One day, the " << noun << " " << verb << "ed so " << adjective << " that it became famous!" << endl;

    return 0;
}
