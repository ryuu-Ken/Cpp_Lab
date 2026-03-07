//class employee use constructor to initalize and use destrcutor

#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string name;
    float salary;

    public:
    Employee(){
        name = "Kushal";
        salary = 20000;
    }

    /*Employee(string s, float bal){
        name = s;
        salary = bal;
    }*/

    void show_deatils(){
        cout<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl;
    }

    ~Employee(){
        cout<<"Destructor called";
    }
};

int main(){
    Employee e1;
    e1.show_deatils();

    return 0;
}