//concatenate two strings given as input by the user
#include<iostream>
#include<string>
using namespace std;

class String{
    private:
    char st[50];

    public:
    String(){
        strcpy(st," ");  
    }

    String (char data[]){
        strcpy(st,data);
    }

    void display(){
        cout<<"String: "<<st<<endl;
    }

    friend String operator +(String str1, String str2);
};

String operator +(String str1, String str2){
    String temp;
    strcpy(temp.st,str1.st);
    strcat(temp.st,str2.st);
    return temp;
}

int main(){
    String s1("Hello");
    String s2("Students");
    String s3;
    s3 = s1 + s2;
    s3.display();
    return 0;
}