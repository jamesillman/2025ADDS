#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() : root(new TrieNode()) {}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    TrieNode* node = root;
    for (char c : address) {
        int index = c - '0';
        if (!node->children[index]) {
            node->children[index] = new TrieNode();
        }
        node = node->children[index];
    }
    node->isEndOfWord = true;
    node->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* node = root;
    for (char c : networkAddress) {
        int index = c - '0';
        if (!node->children[index]) {
            break;
        }
        node = node->children[index];
    }
    if (node && node->isEndOfWord) {
        return node->routerNumber;
    }
    return -1;
}