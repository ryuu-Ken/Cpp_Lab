//more than 1 func with same name print() to display different data types
#include<iostream>
using namespace std;

void print(int);
void print(float);
void print(string);

int main() {
    print(10);
    print(3.14f);
    print("Hello World");
    return 0;
}

void print(int x) {
    cout << "Integer value: " << x << endl;
}

void print(float y) {
    cout << "Float value: " << y << endl;
}

void print(string z) {
    cout << "String value: " << z << endl;
}