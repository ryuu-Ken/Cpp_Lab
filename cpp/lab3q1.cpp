//calculator using function
//lab3
#include<iostream>
using namespace std;

void calculator(char&, int&, int&);

int main(){
    char op;
    int n1,n2;
    cout<<"Enter the operation: "<<endl<<"A for addition: "<<endl<<"S for Subtraction: "<<endl<<"M for multiplication: "
    <<endl<<"D for division: "<<endl;
    cin>>op;

    cout<<"Enter the value of n1 and n2: "<<endl;
    cin>>n1>>n2;
    calculator(op,n1,n2);
    return 0;

}

void calculator(char &t, int &x, int &y){
    switch(t){
        case 'a' :
        cout<<"Addition: "<< x + y;
        break;

        case 's':
        cout<<"Subtraction: "<< x - y;
        break;

        case 'm':
        cout<<"Multiplication: "<< x * y;
        break;

        case 'd': 
        cout<<"Divsion: "<<x / y;
        break;

        default:
        cout<<"Enter valid operation: ";
        break;

    }
}