#include "BubbleSort.h"


std::vector<int> BubbleSort::sort(std::vector<int> list) {
    int n = list.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            
            if (list[j] > list[j+1]) {
                //Switches max value
                std::swap(list[j], list[j+1]);
            }
        }
    }
    //Returns sorted list
    return list;
}
