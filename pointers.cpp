#include <iostream>
using namespace std;
int main(){
    int firstvalue;
    int secondvalue;
    int * pPointer = nullptr;

    pPointer = &firstvalue;

    *pPointer = 10; //indirection

    pPointer = &secondvalue;
    *pPointer = 20;

    cout<<"firstvalue is "<<firstvalue<< '\n';
    cout<<"secondvalue is "<<secondvalue<<'\n';

    return 0;
}