#include <iostream>
#include "updated_Rectangle.h"
using namespace std;

int main() {
    float len1, wid1, len2, wid2;
    
    cout << "=== FIRST RECTANGLE (Default Constructor + Setters) ===" << endl;
    Rectangle rectangle1;
    
    cout << "Enter length: ";
    cin >> len1;
    cout << "Enter width: ";
    cin >> wid1;
    
    rectangle1.setLength(len1);
    rectangle1.setWidth(wid1);
    cout << "Area: " << rectangle1.calculateArea() << endl;
    
    cout << "\n=== SECOND RECTANGLE (Overloaded Constructor) ===" << endl;
    cout << "Enter length: ";
    cin >> len2;
    cout << "Enter width: ";
    cin >> wid2;
    
    Rectangle rectangle2(len2, wid2);
    cout << "Area: " << rectangle2.calculateArea() << endl;
    
    return 0;
}
