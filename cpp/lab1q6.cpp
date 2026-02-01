//concept of explicit type conversion

#include<iostream>

using namespace std;

int main(){
    int x=5, z;
    float y = 2.2;
    z = (int) (x+y);
    cout<<"Direct value of x+y is "<<x+y<<endl;
    cout<<"Value of z = "<<z;
    return 0;
}
