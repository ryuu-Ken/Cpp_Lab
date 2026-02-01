//calc using macro
#include<iostream>
using namespace std;

#define PRINT_SUM(a,b)cout<<"sum is:"<<(a+b)<<endl
#define PRINT_SUB(a,b)cout<<"diff is:"<<(a-b)<<endl
#define PRINT_MULTI(a,b)cout<<"product is:"<<(a*b)<<endl
#define PRINT_DIV(a,b)cout<<"division is:"<<(a/b)<<endl

int main()
{
    int num1,num2,op;
    cout<<"Operations to perform "<<endl<< "1 for Addition"<<endl <<"2 for Subtraction"<<endl<<"3 for Multipilcation"
    <<endl<<"4 for Division \nEnter an operation:  "<<endl;
    cin>>op;
    cout<<"Enter the value of num1 is:"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 is:"<<endl;
    cin>>num2;
    switch(op){
        case 1 :
        PRINT_SUM(num1,num2);
        break;
        
        case 2 :
        PRINT_SUB(num1,num2);
        break;

        case 3:
        PRINT_MULTI(num1,num2);
        break;

        case 4:
        PRINT_DIV(num1,num2);
        break;
        
        default:
        cout<<"Enter valid operation";
        
}
    return 0;
}

