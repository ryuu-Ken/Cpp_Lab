//setw setfill and setprecision
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //setw
    int x1=123, x2=234, x3=789;
    cout<<"setw()"<<endl;
    cout<<setw(8)<<"Pulchowk"<<setw(20)<<"Values"<<endl<<setw(8)<<"Pokhara"<<setw(20)
    <<x1<<endl<<setw(8)<<"Dharan"<<setw(20)<<x2<<endl<<setw(8)<<"Kathmandu"<<setw(20)
    <<x3<<endl;
    //setfill()
    cout<<endl;
    cout<<"setfill()"<<endl;
    cout<<setw(15)<<setfill('*')<<99<<97<<endl;
    //set precision
    cout<<endl;
    cout<<"setprecision()"<<endl;
    float x = 0.02354;
    cout<<fixed<<setprecision(3)<<x<<endl;
    cout<<scientific<<x<<endl;
    return 0;
}