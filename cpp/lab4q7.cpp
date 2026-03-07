//create class complex and 2 complex using constructor

#include<iostream>
using namespace std;

class Complex{
    private:
    float real;
    float img;

    public:
    Complex(){
        real = 0.0;
        img = 0.0;
    }

    Complex(float r, float i){
        real = r;
        img = i;
    }

    void show_details(){
        cout<<"The sum of complex number is: ";
        cout<<real<<" + "<<img<<"i"; 
    }

    
    Complex addition(Complex cc1, Complex cc2){
        Complex temp;
        temp.real = cc1.real + cc2.real;
        temp.img = cc1.img + cc2.img;
        return temp;
    }

};

int main(){
    Complex c1(2,4), c2(3,4), c3;
    c3 = c3.addition(c1 , c2);
    c3.show_details();
    return 0;
}