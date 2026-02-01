//aray of 5 integer and delete it using delete[]
#include<iostream>

using namespace std;

int main(){
    int i, *arr;
    arr = new int[5];

    for (i=0; i<5; i++){
        arr[i] = (i + 1) ;
    }

    cout << "The elements inside array are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}