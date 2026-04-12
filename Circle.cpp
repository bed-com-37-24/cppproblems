#include "Shapes.h"
#define PI 3.14159f

namespace shapes {
    Circle::Circle() {
        radius = 0;
    }
    
    Circle::Circle(float r) {
        radius = r;
    }
    
    Circle::~Circle() {}
    
    void Circle::setRadius(float r) {
        radius = r;
    }
    
    float Circle::getRadius() const {
        return radius;
    }
}
