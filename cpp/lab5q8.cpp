//user defined to basic data conversion / object to basic

#include<iostream>
using namespace std;

class Distance{
    private:
    float feet;
    float inch;

    public:
    Distance(){
        feet = 0.00;
        inch = 0.00;
    }

    void getdata(){
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inch:";
        cin>>inch;
    }

    operator float(){
        float m = inch / 12;
        m = m + feet;
        return (m/3.2808);
    }
};

int main(){
    Distance d;
    float meters;
    d.getdata();
    meters = d;
    cout<<"The distance in meters is: "<<meters<<" meters";
    return 0;
}