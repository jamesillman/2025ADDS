#include <iostream>
#include <vector>
#include "Heap.tpp"  // Your heap implementation

int main() {
    // Create a heap instance (min-heap or max-heap depending on your code)
    Heap<int> heap;

    // Insert some values (assuming you have an insert or buildHeap function)
    std::vector<int> initialValues = {5, 3, 7, 1, 4};

    for (int val : initialValues) {
        heap.insert(val);
    }

    std::cout << "Initial heap: ";
    heap.printHeap();  // Assuming you have a printHeap() function

    // Test 1: Remove element 5
    std::cout << "Removing element 5..." << std::endl;
    heap.remove(5);
    std::cout << "Heap after removing 5: ";
    heap.printHeap();

    // Test 2: Remove element 1
    std::cout << "Removing element 1..." << std::endl;
    heap.remove(1);
    std::cout << "Heap after removing 1: ";
    heap.printHeap();

    // Test 3: Remove element 10 (which is not in the heap)
    std::cout << "Removing element 10 (not in heap)..." << std::endl;
    heap.remove(10);
    std::cout << "Heap after removing 10: ";
    heap.printHeap();

    // Test 4: Pop the top element and print it (if you have popTop)
    std::cout << "Popping top element..." << std::endl;
    int top = heap.popTop();
    std::cout << "Popped top element: " << top << std::endl;
    std::cout << "Heap after popping top: ";
    heap.printHeap();

    return 0;
}
