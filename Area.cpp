#include "Area.h"
#define PI 3.14159f

float Area::calculateSquareArea(const shapes::Square& square) {
    float side = square.getSideLength();
    return side * side;
}

float Area::calculateTriangleArea(const shapes::Triangle& triangle) {
    float base = triangle.getBase();
    float height = triangle.getHeight();
    return 0.5f * base * height;
}

float Area::calculateCircleArea(const shapes::Circle& circle) {
    float radius = circle.getRadius();
    return PI * radius * radius;
}
