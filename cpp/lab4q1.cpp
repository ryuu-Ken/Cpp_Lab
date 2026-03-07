//take details from user & display it using it using the concept of class & object

#include<iostream>
#include<string>
using namespace std;

class detail{
    private:
    string name;
    char address[20];
    int roll;

    public:
    void get_details(){
        cout<<"Enter the name of the person: ";
        getline(cin,name);
        cout<<"Enter the rollno: ";
        cin>>roll;
        cout<<"Enter the address: ";
        cin>>address;
    }

    void show_details(){
        cout<<"Name: "<<name << endl << "Rollno: " <<roll <<endl << "Address: " << address <<endl;
    }

};

int main(){
    detail d;
    d.get_details();
    d.show_details();
    return 0;
}