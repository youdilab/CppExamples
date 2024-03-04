#include <iostream>

class YoudiClass
{
public:
    int index;
    std::string name;
};

int main()
{
    std::cout << "C++ Learning\n";

    std::cout << "Memory Allocation\n";

    //Allocating on stack
    YoudiClass* prolongedStack;
    {
        YoudiClass onStack = YoudiClass();
        onStack.index = 0;
        onStack.name = "Stack";
        prolongedStack = &onStack;
    }

    std::cout << "Name of Variable on stack: " + prolongedStack->name + "\n";

    //Allocating on heap
    YoudiClass* prolongedHeap;
    {
        YoudiClass* onHeap = new YoudiClass();
        onHeap->index = 1;
        onHeap->name = "Heap";
        prolongedHeap = onHeap;
    }

    std::cout << "Name of Variable on heap: " + prolongedHeap->name + "\n";
    delete prolongedHeap;//Making sure the heap allocated object is deleted.
}
