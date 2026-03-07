//create class rectangle and calc area using friend function

#include<iostream>
using namespace std;


class rectangle{
    private:
    int width;
    int height;

    public:
    rectangle(){
        width = 0;
        height = 0;
    }

    void get_details(){
        cout<<"Enter the width: ";
        cin>>width;
        cout<<"Enter the height: ";
        cin>>height;
    }

    friend void area(rectangle r);
};

void area(rectangle r){
    int a;
    a = r.width * r.height;
    cout<<"The area of rectangle is "<<a;
}

int main(){
    rectangle r1;
    r1.get_details();
    area(r1);
    return 0;
}

