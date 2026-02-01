//diff betn cin and getline
#include<iostream>

using namespace std;

void in();
void line();

int main(){
    line();
    in();
    return 0;
}

void in(){
    char name[20];
    cout<<"Enter the name using cin: "<<endl;
    cin>>name;
    cout<<name;
}

void line(){
    string sentence;
    cout<<"Enter the sentence using getline: "<<endl;
    getline(cin,sentence);
    cout<<sentence<<endl;
}

