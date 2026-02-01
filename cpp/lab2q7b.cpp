#include <iostream>
using namespace std;

namespace BCA {
    char name[2][20];
    int roll[2];

    void show_detail() {
        int i;
        cout << "BCA Students:\n";
        for ( i = 0; i < 2; i++) {
            cout << "Name: " << name[i]
                 << ", Rollno: " << roll[i] << endl;
        }
    }
}

namespace CSIT {
    char name[2][20];
    int roll[2];

    void show_detail() {
        int i;
        cout << "CSIT Students:\n";
        for ( i = 0; i < 2; i++) {
            cout << "Name: " << name[i]
                 << ", Rollno: " << roll[i] << endl;
        }
    }
}

int main() {
    int i;
    for ( i = 0; i < 2; i++) {
        cout << "Enter the name and rollno of CSIT student " << i + 1 << ": ";
        cin >> CSIT::name[i] >> CSIT::roll[i];

        cout << "Enter the name and rollno of BCA student " << i + 1 << ": ";
        cin >> BCA::name[i] >> BCA::roll[i];
    }

    CSIT::show_detail();
    BCA::show_detail();

    return 0;
}
