//wap to overload a function volume of cube,cylinder and reactangle

#include<iostream>
using namespace std;
# define PI 3.14

float volume (int);// acube
float volume (float , int); //pi*r2*h
float volume (int, int , int); // l * w * h

int main(){
    int a, l, w, H, h;
    float r;
    cout<<"Volume for cube: "<<endl<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"The volume of cube is: "<<volume(a)<<endl;

    cout<<"Volume for cylinder"<<endl<<"Enter the value of r and h: "<<endl;
    cin>>r>>h;
    cout<<"The volume of cylinder is: "<<volume(r,h)<<endl;

    cout<<"Volume of rectangle box"<<endl<<"Enter the value of length width and height: "<<endl;
    cin>>l>>w>>H;
    cout<<"The volume of rectangle box is: "<<volume(l,w,H);

    return 0;
}

float volume (int a){
    return a*a*a;
}

float volume ( float r, int h ){
    return PI*r*r*h;
}

float volume (int l, int w, int H){
    return l*w*H;
}