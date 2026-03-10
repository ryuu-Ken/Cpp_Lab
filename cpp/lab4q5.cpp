//class name distance & appropriate data member meter & cm. add 2 distances and return sum in main

#include<iostream>
using namespace std;

class Distance{
    private:
    float meter;
    float centimeter;

    public:
    Distance(){
        meter = 0.0;
        centimeter = 0.0;
    }

    void input(){
        cout<<"Enter the value of centimeter:  "<<endl;
        cin>>centimeter;
        cout<<"Enter the value of meter: "<<endl;
        cin>>meter;
    }

    Distance addition(Distance dd1, Distance dd2){
        Distance temp;
        temp.meter = dd1.meter + dd2.meter;
        temp.centimeter = dd2.centimeter + dd1.centimeter;
        if (centimeter>100){
            temp.meter++;
            temp.centimeter = temp.centimeter - 100;
        }
        return temp;
    }

    void show_details(){
        cout<<"The sum is: "<<endl;
        cout<<"Meter:"<<meter<<" "<<"centimeter:" <<centimeter;
    }
};

int main(){
    Distance d1, d2, d3;
    d1.input();
    d2.input();
    d3 = d3.addition(d1,d2);
    d3.show_details();
    return 0;
}