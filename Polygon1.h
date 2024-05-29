#pragma once

class Polygon1 {
protected:
    int mWidth;
    int mHeight;
public:
    void SetValues(int width, int height);
    virtual int Area() = 0;  // Pure virtual function
};
