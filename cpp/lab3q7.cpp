//default argument
#include<iostream>
using namespace std;

float SI(float p = 1500, float t = 5, float r = 15);

int main(){
    cout<<"SI with default values"<<endl;
    cout<<"The simple interest is: "<<SI()<<endl;

    cout<<"SI with default value r only"<<endl;
    cout<<"The simple interest is: "<<SI(2500,3)<<endl;

    cout<<"SI with default values r and t"<<endl;
    cout<<"The simple interest is: "<<SI(4700);
    return 0;
}


float SI(float p, float t, float r ){
    return (p*t*r)/100;
}

