//inline to check even or odd

#include<iostream>

using namespace std;

inline void check(int n){
    if (n % 2 == 0){
        cout<<"It is even";
    }
    else{
        cout<<"It is odd";
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    check(n);
    return 0;
}