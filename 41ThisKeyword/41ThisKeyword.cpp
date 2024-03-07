// 41ThisKeyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Youdi2DVector
{
public:
    Youdi2DVector(int x, int y)
    {
        this->x = x;
        this->y = y;

        Youdi2DVector* const dummy = this;
    }

    int getX() const
    {
        return x;
    }

    int getY() const
    {
        return y;
    }

private:
    int x;
    int y;    
};

void print2dVector(const Youdi2DVector& myVector)
{
    std::cout << myVector.getX();
    std::cout << myVector.getY();
}

int main()
{
    Youdi2DVector one{ 2, 3 };
}

