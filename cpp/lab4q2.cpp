//array and object of class,write display name roll grade

#include<iostream>
using namespace std;

class Students{
    char name[20];
    int roll_no;
    char grade[10];
    public:
    void ip_data();
    void op_data();
};

void Students::ip_data(){
    cout<<"Enter name, roll_no, grade:"<<endl;
    cin>>name>>roll_no>>grade;
}

void Students::op_data(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll_no:"<<roll_no<<endl;
    cout<<"Grade:"<<grade<<endl;
}

int main(){
    Students s[15];
    int n, i=0;
    cout<<"Enter the number of students:";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the details of "<<i+1<<" student"<<endl;
        s[i].ip_data();
    }

    for (i=0; i<n; i++){
        cout<<"The details of "<< i+1 <<" student:"<<endl;
        s[i].op_data(); 
    }
    return 0;
}