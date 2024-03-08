// 42ObjectLifetime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Vehicle
{
public:
    Vehicle(std::string name)
        :carName(name)
    {
        std::cout << carName+": object created.\n";
    }

    ~Vehicle()
    {
        std::cout << carName+": object destroyed.\n";
    }
private:
    std::string carName;
};

int* createArray()
{
    int* array = new int[10];

    //int* array[10];//This is incorrect as the array is created on the stack.
    //It may work under circumstances where the address was not yet overwritten.
    //But it is incorrect in principle and unrelaible, may return unexpected values.

    for (int i = 0; i < 10; i++)
    {
        array[i] = i * 100;
    }
    return array;
}

int main()
{
    //How objects created on the stack gets destroyed as soon as they go oit of scope.
    Vehicle carStack("Toyota");
    Vehicle* carHeap = new Vehicle("Nissan");

    //We have to be careful when creating variables on the stack to use later
    //as they may get destroyed as soon as they go out of scope.
    int* myArray = createArray();
    std::cout << std::to_string(myArray[2]);
    
    delete[] myArray;//Do not forget to delete the allocated memory on the heap.
}
