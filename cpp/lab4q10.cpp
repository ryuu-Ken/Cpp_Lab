//sum of 2 complex num using friend class

#include<iostream>
using namespace std;
class subcomplex;

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
        cout<<"The sum of Complex number is: "<<endl;
        cout<<real<<" + "<<img<<"i";
    }

    friend subcomplex;
};

class subcomplex{
    public:
    Complex additon(Complex cc1, Complex cc2){
    Complex temp;
    temp.real = cc1.real + cc2.real;
    temp.img = cc1.img + cc2.img;
    return temp;
}   
};

int main(){
    Complex c1(1.1,2.2), c2(2,4), c3;
    subcomplex st;
    c3 = st.additon(c1, c2);
    c3.show_details();
    return 0; 
}

