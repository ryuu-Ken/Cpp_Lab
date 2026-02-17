//add 2 complex number using infix operator overloading
#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imag;

    public:
    Complex(){
        real = 0;
        imag = 0;
    }

    Complex(int r, int i){
        real = r;
        imag = 0;
    }

    void showdetails(){
        cout<<real<<"+i"<<imag;
    }

    Complex operator +(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }  
};

int main(){
    Complex c1(2,3), c2(4,5), c3;
    c3 = c1 + c2;
    c3.showdetails();
    return 0;
}
