#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    size_t start_index = 0;  // Start index for find()

    for (size_t i = 1; i <= s2.size(); ++i) {
        size_t found = s1.find(s2.substr(0, i), start_index);  // Find prefix starting from start_index
        
        if (found != string::npos) {
            result.push_back(found);
            start_index = found + 1;  // Update start_index to continue searching after the found prefix
        } else {
            result.push_back(-1);  // If not found, return -1 for this prefix
            result.resize(s2.size(), -1);  // Fill remaining with -1s
            break;
        }
    }

    return result;
}
