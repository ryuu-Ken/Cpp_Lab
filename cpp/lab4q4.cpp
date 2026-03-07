//class name time and calculate the sum & diff of manager

#include<iostream>

using namespace std;

class Time{
    private:
    int hh;
    int mm;
    int ss;

    public:
    Time(){
        hh = 0;
        mm = 0;
        ss = 0;
    }

    void get_details(){
        cout<<"Enter time in hh mm ss format: ";
        cin>>hh>>mm>>ss;   
    }

    void showtime(){
        cout<<"The sum is: "<< hh <<"Hours" " " << mm << "Minutes" " " << ss <<"Seconds";
    }

    Time addition(Time t1, Time t2){
        Time temp;
        temp.hh = t1.hh + t2.hh;
        temp.mm = t1.mm + t2.mm;
        temp.ss = t1.ss + t2.ss;
        while(temp.ss>=60){
            temp.ss-=60;
            temp.mm++;
        }

        while(temp.mm>=60){
            temp.mm-=60; 
            temp.hh++;
        }

        return temp;
    }

};

int main() {
    Time t1, t2, sum;

    t1.get_details();
    t2.get_details();

    sum = sum.addition(t1, t2);   
    sum.showtime();

    return 0;
}