#pragma once
class polygon {
protected:
int mWidth;
int mHeight;
public:
void SetValues(int width, int height);
virtual int Area() = 0;
void PrintArea();
};