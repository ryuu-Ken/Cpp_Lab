//calc sum of 2 num using this pointer

#include<iostream>
using namespace std;

class Sum {
    private:
    int a;
    int b;

    public:
    Sum(){
        a = 0;
        b = 0;
    }

    Sum(int a, int b) {
        this->a = a;   
        this->b = b;
    }

    void display() {
        cout << "Sum = " << this->a + this->b;
    }
};

int main() {
    Sum s1(5,7);
    s1.display();

    return 0;
}