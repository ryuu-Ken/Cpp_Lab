//object to object / user to user
//A. bywriting coversion in source class

#include<iostream>
#include<cmath>
using namespace std;

class Polar{
    private:
    float r, theta;

    public:
    Polar(){
        r = 0.00;
        theta = 0.00;
    }

    Polar (float rad, float ang){
        r = rad;
        theta = ang;
    }

    void showdata(){
        cout<<"The co-ordianate in polar form (r,theta) is: "<<endl;
        cout<<"("<<r<<","<<theta<<")";
    }
};

class Rectangular {
    private:
    float x,y;

    public:
    Rectangular(){
        cout<<"Enter co-ordinate in cartesian system (x,y): "<<endl;
        cin>>x>>y;
    }

    operator Polar(){
        float rad,ang;
        rad = sqrt(pow(x,2) + pow(y,2));
        ang = atan(y/x);
        return Polar(rad,ang);
    }
};

int main(){
    Polar pol;
    Rectangular rect;
    pol = rect; //rect.operator()
    pol.showdata();
    return 0;
}