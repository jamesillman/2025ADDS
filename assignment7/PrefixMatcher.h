#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>
#include <vector>

struct TrieNode {
    bool isEndOfWord = false;
    std::vector<TrieNode*> children = std::vector<TrieNode*>(26, nullptr);
    int routerNumber = 0;
};

class PrefixMatcher {
private:
    TrieNode* root;
public:
    PrefixMatcher();
    void insert(std::string address, int routerNumber);
    int selectRouter(std::string networkAddress);
};

#endif