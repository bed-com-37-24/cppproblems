#include <iostream>
#include "Rectangle1.h"
#include "Triangle1.h"
using namespace std;
int main() {
Rectangle rect;
Triangle trgl;
polygon * pPoly1 = &rect;
polygon* pPoly2 = &trgl;
pPoly1->SetValues(4,5);
pPoly2->SetValues(4,5);
pPoly1->PrintArea();
pPoly2->PrintArea();


return 0;
}