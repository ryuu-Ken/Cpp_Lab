//class currency use infix and postfix operator overloading
#include<iostream>
using namespace std;

class currency{
    private:
    int rs;
    int paisa;

    public:
    currency(){
        rs = 0;
        paisa = 0;
    }

    currency (int r, int p){
        rs = r;
        paisa = p;
    }

    void showdeatils(){
        cout<<"The value of rs: "<<rs<<endl;
        cout<<"The value of paisa: "<<paisa<<endl;
    }

    void operator ++(){ //prefix
        rs++;
        paisa++;
    } 

    void operator ++(int){ //postfix
        rs++;
        paisa++;
    }

    ~currency(){
        cout<<"Destructor called";
    }
};

int main(){
    currency c1(22,2), c2(999,9);
    cout<<"Before prefix increment"<<endl;
    c1.showdeatils();
    ++c1;
    cout<<"After prefix increment"<<endl;
    c1.showdeatils();
    cout<<"Before postfix inccrement"<<endl;
    c2.showdeatils();
    c2++;
    cout<<"After postfix increment "<<endl;
    c2.showdeatils();
    return 0;
}