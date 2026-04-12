#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle myRectangle;
    float userLength, userWidth;
    
    cout << "Enter the length of the rectangle: ";
    cin >> userLength;
    cout << "Enter the width of the rectangle: ";
    cin >> userWidth;
    
    myRectangle.setLength(userLength);
    myRectangle.setWidth(userWidth);
    
    cout << "\nRectangle Area: " << myRectangle.calculateArea() << endl;
    
    return 0;
}
