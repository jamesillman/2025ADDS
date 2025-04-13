#include <iostream>
#include <vector>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::vector<int> list;
    int num;
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    while (iss >> num) {
        list.push_back(num);
    }

    QuickSort sorter;
    list = sorter.sort(list);

    RecursiveBinarySearch searcher;
    bool found = searcher.search(list, 1);

    std::cout << (found ? "true" : "false");
    for (int n : list) {
        std::cout << " " << n;
    }
    std::cout << std::endl;

    return 0;
}
