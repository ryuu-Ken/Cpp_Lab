//Basic to object data conversion / Basic to user defined

#include<iostream>
using namespace std;

class Dollar{
    private:
    int dol;
    float cent;

    public:
    Dollar(){
        dol = 0;
        cent = 0.0;
    }

    Dollar(int Rs){
        float equiv_dollar = Rs / 120.0;
        //Assume 1$ = Rs120
        dol = int(equiv_dollar);
        //truncate fractional part 
        cent = 100*(equiv_dollar-dol);
    }

    void display(){
        cout<<dol<<"$ "<<"and "<<cent<<"cents";
    }
};

int main(){
    Dollar d1=345, d2(450);
    cout <<"The Nepalese Currency Equivalent in Dollar and Cent ";
    d1.display();
    cout<<endl<<"Dollar equivalent of Rs450 is: ";
    d2.display();
    return 0;
}