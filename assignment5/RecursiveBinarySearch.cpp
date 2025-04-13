#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int target) {
    return binarySearch(list, target, 0, list.size() - 1);
}

bool RecursiveBinarySearch::binarySearch(std::vector<int>& list, int target, int start, int end) {
    if (start > end) {
        return false;
    }

    int mid = start + (end - start) / 2;
    
    if (list[mid] == target) {
        return true;
    } else if (list[mid] > target) {
        return binarySearch(list, target, start, mid - 1);
    } else {
        return binarySearch(list, target, mid + 1, end);
    }
}
