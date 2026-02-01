//dma an integer and deallocates it using delete
#include<iostream>

using namespace std;

int main(){
    int *p;
    p = new int;
    //*p = 555;
    cout<<"Enter the value of p: "<<endl;
    cin>>*p;
    cout<<"The entered number is: "<<*p<<endl;
    delete p;
    cout<<"After deletion value of p: "<<*p;
    return 0;
}