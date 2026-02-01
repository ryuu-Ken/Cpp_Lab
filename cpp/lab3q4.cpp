//create a function findsmaller and find larger that takes two numbers
#include<iostream>
using namespace std;

int find_smaller(int , int);
int find_larger(int, int);

int main(){
    int n1,n2, c, d;
    cout<<"Enter the value of n1: "<<endl;
    cin>>n1;
    cout<<"Enter the value of n2: "<<endl;
    cin>>n2;
    c = find_smaller(n1,n2);
    cout<<"The smaller value between n1 and n2 is: "<<c<<endl;
    d = find_larger(n1,n2);
    cout<<"The larger value between n1 and n2 is : "<<d;
    return 0;
}

int find_smaller(int n1, int n2){
    if(n1<n2){
    return n1;
}
    else {
        return n2;
    }

}

int find_larger(int n1, int n2){
    if(n1>n2){
    return n1;
}
    else{
        return n2;
    }
}    