//add height of two person using feet & inch
#include<iostream>
using namespace std;

class Height{
    private:
    int feet;
    int inch;

    public:
    Height(){
        feet = 0;
        inch = 0;
    }

    Height(int f, int i){
        feet = f;
        inch = i;
    }

    void showdata(){
        cout<<"The sum of two height is "<<endl;
        cout<<feet<<"ft"<<" "<<inch<<"inch";
    }

    friend Height operator +(Height hh1, Height hh2);

};

Height operator +(Height hh1, Height hh2){
    Height temp;
    temp.feet = hh1.feet + hh2.feet;
    temp.inch = hh1.inch + hh2.inch;
    if (temp.inch>12){
        temp.feet++;
        temp.inch = temp.inch-12;
    }
    return temp;
}

int main(){
    Height h1(6,7), h2(6,11), h3;
    h3 = h1 + h2;
    h3.showdata();
    return 0;
}

