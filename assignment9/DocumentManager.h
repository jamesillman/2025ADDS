#ifndef DOCMAN_H
#define DOCMAN_H

#include <string>
#include <iostream>

#include <unordered_set>
#include <unordered_map>

using namespace std;


class DocumentManager {
    private:
        struct Document {
            std::string name;
            int id;
            int license_limit;
            int borrowed;
        };
        
        // Unordered set used as it allows for quick O(1) search
        std::unordered_set<int> patrons;

        // Unordered map as fast search O(1)
        std::unordered_map<int, Document> documentsById;

        // Unordered map as fast search O(1)
        std::unordered_map<string, Document> documentsByName;

    public:

        void addDocument(string name, int id, int license_limit);

        void addPatron(int patronID);

        int search(string name); // returns docid if name is in the document collection or 0 if the name is not in the collection

        bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

        void returnDocument(int docid, int patronID);
};

#endif