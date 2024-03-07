// 41ThisKeyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Youdi2DVector
{
public:
    Youdi2DVector(int x, int y)
    {
        this->x = x;//this keyword distinguishes between object's x vs incoming x.
        this->y = y;

        Youdi2DVector* const dummy = this;
    }

    //This can be a const function as it does not change class properties.
    int getX() const
    {
        return x;
    }

    //This can be a const function as it does not change class properties.
    int getY() const
    {
        return y;
    }

private:
    int x;
    int y;    
};

void print2dVector(Youdi2DVector& myVector)
{
    std::cout << myVector.getX();
    std::cout << myVector.getY();
}

int main()
{
    Youdi2DVector one{ 2, 3 };
    print2dVector(one);
}