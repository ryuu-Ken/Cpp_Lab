//inline function that takes 3 arguments and calculate largest

#include<iostream>

using namespace std;

inline int highest(int a, int b, int c){
    if(a> b && a>c){
        return a;
    }
    else if(b>c && b>a){
        return b;
    } 
    else {
        return c;
    }
}

int main(){
    int num1,num2,num3;
    cout<<"Enter tha values of num1 num2 and num3: "<<endl;
    cin>>num1>>num2>>num3;
    cout<<"The greatest among the 3 numbers is: "<<highest(num1,num2,num3);
    return 0;
}