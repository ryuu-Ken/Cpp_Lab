//use 2 namespace bca and csit ubder dav

#include<iostream>

using namespace std;

namespace BCA{
    char name[20];
    int roll;

    void show_detail(){
        cout<<"BCA Student: "<<endl;
        cout<<"Name: "<<name<<endl<<"Rollno: "<<roll<<endl;
    }
}

namespace CSIT{
    char name[20];
    int roll;

    void show_detail(){
        cout<<"CSIT Student: "<<endl;
        cout<<"Name: "<<name<<endl<<"Rollno: "<<roll<<endl;
    }
}

int main(){
    int i;
    for (i=0; i<2; i++){
        cout<<"Enter the name and rollno of CSIT student: "<<endl;
        cin>>CSIT::name>>CSIT::roll;
        cout<<"Enter the name and rollno of BCA student: "<<endl;
        cin>>BCA::name>>BCA::roll;
    }
    CSIT::show_detail();
    BCA::show_detail();
    return 0;
}

