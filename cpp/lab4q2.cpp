//array and object of class,write display name roll grade

#include<iostream>
using namespace std;

class students{
    char name[20];
    int roll_no;
    char grade[10];
    public:
    void ip_data();
    void op_data();
};

void students::ip_data(){
    cout<<"Enter name, roll_no, grade:"<<endl;
    cin>>name>>roll_no>>grade;
}

void students::op_data(){
    cout<<"The details of students are:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Roll_no:"<<roll_no<<endl;
    cout<<"Grade:"<<grade<<endl;
}

int main(){
    students s[5];
    int n;
    cout<<"Enter the number of students:";
    cin>>n;
    int i=0;
    for(i=0;i<n;i++){
    s[i].ip_data();
    s[i].op_data(); 
    }
    return 0;
}