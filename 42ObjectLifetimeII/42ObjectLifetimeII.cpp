// 42ObjectLifetimeII.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Vehicle
{
public:
    Vehicle(std::string name)
        :carName(name)
    {
        std::cout << carName + ": object created.\n";
    }

    ~Vehicle()
    {
        std::cout << carName + ": object destroyed.\n";
    }
private:
    std::string carName;
};

class ScopedVehicle
{
public:
    ScopedVehicle(Vehicle* vehiclePtr)
        :ptr(vehiclePtr)
    {
    }

    ~ScopedVehicle()
    {
        delete ptr;
    }
private:
    Vehicle* ptr;
};

int main()
{
    //Requirement is to create a vehicle object on the heap ..
    //but automate its deletion.

    //(instead of doing this.)
    Vehicle* carHeap1 = new Vehicle("Nissan");
    delete carHeap1;

    //It can be automated using a scoped pointer object alllocated on the stack.
    ScopedVehicle carHeap2 = new Vehicle("Honda");//Works due to implicit conversion.

    //It can also be written like this.
    ScopedVehicle carHeap3(new Vehicle("Ford"));

}