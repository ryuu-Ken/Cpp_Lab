//create class box and claculate volume of box

#include<iostream>
using namespace std;

class Box{
    private:
    float l;
    float b;
    float h;

    public:
    Box(){
        l = 0.0;
        b = 0.0;
        h = 0.0;
    }

    void in(){
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the breadth: ";
        cin>>b;
        cout<<"Enter the height: ";
        cin>>h;
        
    }

    void out(){
        cout<<"The volume is :"<<l*b*h<<endl;
    }
    ~Box(){
        cout<<"Destructor called";
    };
};

int main(){
    Box b;
    b.in();
    b.out();
    return 0;
}