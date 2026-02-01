//access global and local variable using same name
#include<iostream>

using namespace std;

int x = 10;

int main() {
    // Local variable with the same name
    int x = 20;

    cout << "Local x = " << x << endl;      // Accesses local variable
    cout << "Global x = " << ::x << endl;   // Accesses global variable

    return 0;
}
