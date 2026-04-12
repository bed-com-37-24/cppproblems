#ifndef SHAPES_H
#define SHAPES_H

namespace shapes {
    class Square {
    private:
        float sideLength;
    public:
        Square();
        Square(float side);
        ~Square();
        void setSideLength(float side);
        float getSideLength() const;
    };
    
    class Triangle {
    private:
        float base;
        float height;
    public:
        Triangle();
        Triangle(float b, float h);
        ~Triangle();
        void setBase(float b);
        void setHeight(float h);
        float getBase() const;
        float getHeight() const;
    };
    
    class Circle {
    private:
        float radius;
    public:
        Circle();
        Circle(float r);
        ~Circle();
        void setRadius(float r);
        float getRadius() const;
    };
}

#endif
