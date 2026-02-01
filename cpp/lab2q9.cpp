//enum for color
#include <iostream>
using namespace std;


enum Color {
    Red=101,
    Green,
    Blue,
    Yellow,
    White
};

int main() {
    cout << "Color and their integer values:\n";

    cout << "Red = " << Red << endl;
    cout << "Green = " << Green << endl;
    cout << "Blue = " << Blue << endl;
    cout << "Yellow = " << Yellow << endl;
    cout << "White = " << White << endl;

    return 0;
}
