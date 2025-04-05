#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    size_t start_index = 0;

    for (size_t i = 1; i <= s2.size(); ++i) {
        size_t found = s1.find(s2.substr(0, i), start_index);

        if (found != string::npos) {
            result.push_back(found);
            start_index = found;  // Update start_index to the position of the found prefix
        } else {
            result.push_back(-1);
            break;
        }
    }

    if (result.size() < s2.size()) {
        result.resize(s2.size(), -1);
    }

    return result;
}
