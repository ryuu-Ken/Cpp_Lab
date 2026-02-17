//class box l,b,h private & display volume of box
#include<iostream>
using namespace std;

class Box{
    private:
    float length;
    float breadth;
    float height;

    public:
    Box(){
        length = 0.0;
        breadth = 0.0;
        height  = 0.0;
    }

    void getdata(){
        cout<<"Enter the value of length: ";
        cin>>length;
        cout<<"Enter the value of breadth: ";
        cin>>breadth;
        cout<<"Enter the value of height: ";
        cin>>height;
    }

    void showdata(){
        cout<<"The value of l,b,h :"<<length<<" "<<breadth <<" "<<height<<endl;
        cout<<"The volume of box is: "<<length*breadth*height<<endl; 
    }

    void operator --(){
        length--;
        breadth--;
        height--;
    }

    ~Box(){
        cout<<"Destructor called";
    }
};

int main(){
    Box b1;
    b1.getdata();
    b1.showdata();
    --b1;
    cout<<"After Decrement"<<endl;
    b1.showdata();
    return 0;
}