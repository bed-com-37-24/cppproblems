#include <iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter an integer value between 5 and 10"<< endl;

    while(!(cin >> num)){
        cin.clear();  // clear error flag
        cin.ignore(10000, '\n');  // discard bad input
        cout << "Sorry, you entered an invalid number, please try again"<<endl;
    }
    
    while (num < 5 || num > 10) {
        cout << "You entered " << num << ". Please enter a number between 5 and 10." << endl;
        cin >> num;
    }
    
    cout<<"Your input value(" << num << ") has been accepted." << endl;
    return 0;
}
