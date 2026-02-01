//even odd without using namespace

#include<iostream>

int main(){
    int n;
    std::cout<<"Enter the value of n:"<<std::endl;
    std::cin>>n;
    if(n % 2 == 0){
        std::cout<<"The number is even";
    }
    else{
    std::cout<<"The number is odd";
    }
    return 0;
}
