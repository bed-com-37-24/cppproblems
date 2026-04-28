#include "polygon1.h"
#include <iostream>
using namespace std;

void polygon::SetValues(int width, int height)
{
mWidth = width;
mHeight = height;
}
void polygon::PrintArea()
{
cout << this->Area() << '\n';
}