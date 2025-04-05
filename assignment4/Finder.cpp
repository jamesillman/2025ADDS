#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        string currentPrefix = "";

        for (size_t i = 0; i < s2.size(); ++i) {
            currentPrefix += s2[i];
            // Do a manual prefix search to avoid substr overhead
            bool found = false;
    
            for (size_t j = 0; j + currentPrefix.size() <= s1.size(); ++j) {
                if (s1.compare(j, currentPrefix.size(), currentPrefix) == 0) {
                    result.push_back(j);
                    found = true;
                    break;
                }
            }
    
            if (!found) {
                // fill rest with -1s
                result.resize(s2.size(), -1);
                break;
            }
        }
        return result;
    }

   