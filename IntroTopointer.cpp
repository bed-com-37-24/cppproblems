#include <iostream>
using namespace std;
int main (){
    //declare pointer and initialize it
    int* pPointer = nullptr;

    int integerVar = 5;
    // assign pointer to address of object
    pPointer = &integerVar;

    cout<<"integerVar: "<< integerVar<< endl;

    cout<<"Address of integerVar: "<< &integerVar<< endl;

    cout<<"pPointer: "<< pPointer << endl;

    cout<<"Address of pPointer"<<&pPointer << endl;

    return 0;
} 