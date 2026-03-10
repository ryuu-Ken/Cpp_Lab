//object to object / user to user
//B. bywriting coversion in destination class

#include<iostream>
#include<cmath>
using namespace std;

class Rectangular{
    private:
    float x,y;

    public:
    Rectangular(){
        cout << "Enter rectangular co-ordinates (x,y): "<<endl;
        cin>>x>>y;
    }

    float returnx(){
        return x;
    }

    float returny(){
        return y;
    }
};

class Polar{
    private:
    float r, theta;

    public:
    Polar(){
        r = 0.00;
        theta = 0.00;
    }

    Polar(Rectangular p){
        r = sqrt( pow(p.returnx(),2) + pow(p.returny(),2) );
        theta = atan( p.returny() / p.returnx() );
    }

    void showdata(){
        cout<<"The co-ordinate in polar system(r,theta) is "<<endl;
        cout<<"("<<r<<","<<theta<<")";
    }
};

int main(){
    Rectangular rect;
    Polar pol;
    pol = rect; //pol.polar(rect);
    pol.showdata();
    return 0; 
}