#include <iostream>
using namespace std;

int main(){
    char userEntry;
    cout << "Do you have a dog?" << endl;
    cin >> userEntry;

// ternary conditional 
// if 'y' run ? ->
// else "I don't ..."
    (userEntry == 'y') ? (cout << "I have a dog too!" << std::endl)
                       : (cout << "Im sorry to hear that... I have a dog." << std::endl);

    cout << "Thats An Example Of CHAR!" << endl;

}