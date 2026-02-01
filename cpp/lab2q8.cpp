//enum for days of week and display using int

#include<iostream>

using namespace std;

enum day{sunday =1, monday, tuesday, wednesday, thursday, friday, saturday};

int main(){
    enum day d;
    d = monday;
    cout<<"The value of monday is "<<d<<endl;
    return 0;
}