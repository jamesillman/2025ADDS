#include <vector>
#include <queue>

using namespace std;

int kth_largest(vector<int> values, int k) {
    std::priority_queue<int> maxHeap;

    for (int value : values) {
    maxHeap.push(-value);
    
    if (maxHeap.size() > k) {
        maxHeap.pop();
        }  
    }
    
    return maxHeap.top();
}