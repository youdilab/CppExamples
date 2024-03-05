#include <iostream>

class YoudiClass
{
public:
    int index{0};
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

    std::cout << "\n\nNew Keyword\n\n";

    YoudiClass* withNew = new YoudiClass();//Allocates memory and calls the constructor.
    YoudiClass* cMalloc = (YoudiClass*)malloc(sizeof(YoudiClass));//Allocates memory.

    withNew->index = 2;
    withNew->name = "New Keyword";

    delete withNew;

    //Allocating on heap using array operator
    int* a = new int[50];//sizeof(int) = 4, total allocation is 200 = 50x4 bytes.
    delete[] a;

    //Placement new
    int* b = new int{5};
    int* c = new(b) int();

    c->~int();//destructor
    delete b;//deallocating memory
}
   

    
    
