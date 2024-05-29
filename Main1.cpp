#include <iostream>
#include "Rectangle1.h"
#include "Triangle1.h"
using namespace std;

int main() {
    Rectangle1 rect;
    Triangle1 trgl;
    
    Polygon1* pPoly1 = &rect;
    Polygon1* pPoly2 = &trgl;
    
    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);
    
    cout << pPoly1->Area() << '\n';
    cout << pPoly2->Area() << '\n';
    
    return 0;
}
