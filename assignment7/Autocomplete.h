#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>

struct TrieNode {
    // boolean for if the letter is at the end of word defualt is false
    bool isEndWord = false;

    std::vector<TrieNode*> children = std::vector<TrieNode*>(26, nullptr);
};

class Autocomplete {
    private:
        TrieNode* root;
    
    public:
        Autocomplete();
        void insert(std::string word);
        std::vector<std::string> getSuggestions(std::string partialWord);
    
        void storeSuggest(TrieNode* node, std::string prefix, std::vector<std::string>& suggestions);
    
    };
    
#endif
