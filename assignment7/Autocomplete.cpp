#include "Autocomplete.h"

Autocomplete::Autocomplete() : root(new TrieNode()) {}

void Autocomplete::insert(std::string word) {
    TrieNode* node = root;
    for (char c : word) {
        int index = c - 'a';
        if (!node->children[index]) {
            node->children[index] = new TrieNode();
        }
        node = node->children[index];
    }
    node->isEndWord = true;
}

void Autocomplete::storeSuggest(TrieNode* node, std::string prefix, std::vector<std::string>& suggestions) {
    if (node->isEndWord) {
        suggestions.push_back(prefix);
    }
    for (int i = 0; i < 26; i++) {
        if (node->children[i]) {
            char c = 'a' + i;
            storeSuggest(node->children[i], prefix + c, suggestions);
        }
    }
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    std::vector<std::string> suggestions;
    TrieNode* node = root;

    for (char c : partialWord) {
        int index = c - 'a';
        if (!node->children[index]) {
            return suggestions;
        }
        node = node->children[index];
    }

    storeSuggest(node, partialWord, suggestions);
    return suggestions;
}