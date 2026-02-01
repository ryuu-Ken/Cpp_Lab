//read full sentence using getline() and display
#include<iostream>

using namespace std;

int main(){
    string name;
    cout<<"Enter a sentence: "<<endl;
    getline(cin,name);
    cout<<name;
    return 0;
}