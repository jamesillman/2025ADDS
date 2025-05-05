class Node {
    public:
        int data;
        Node* link;
        
        Node(int data, Node* link = nullptr) {
            this->data = data;
            this->link = link;
        }
    };
    
    class LinkedList {
    private:
        Node* head;
        
    public:
        LinkedList() : head(nullptr) {}  // Initialize with an empty list
    
        void headDelete();
        void tailDelete();
        bool positionDelete(int pos);
        bool swap(int i, int j);
        bool deleteFirst(int val);
    };
    
    void LinkedList::headDelete() {
        if (head != nullptr) {
            Node* tempNode = head;
            head = head->link;
            delete tempNode;
        }
    }
    void LinkedList::tailDelete() {
        if (head != nullptr) {
            // Case: only one node
            if (head->link == nullptr) {
                delete head;
                head = nullptr;
                return;
            }
    
            Node* current = head;
            while (current->link->link != nullptr) {
                current = current->link;
            }
    
            delete current->link;
            current->link = nullptr;
        }
    }


    bool LinkedList::positionDelete(int pos) {
        if (pos < 0){
            return false;
        }
        if (pos == 0) {
            headDelete();
            return true;
        }

        Node* prevNode = head;
        for (int i = 1; i < pos -1 && prevNode->link != nullptr; i++) {
            prevNode = prevNode->link;
        }
    
        if (prevNode == nullptr || prevNode->link == nullptr) {
            return false;
        }
    
        Node *temp = prevNode->link;
        prevNode->link = temp->link;
        delete temp;
        return true;
    }

    bool LinkedList::swap(int i, int j) {
        if (i < 0 || j < 0 || i == j) {
            return false;  // invalid indices or same position
        }

        Node* nodeI = head;
        Node* nodeJ = head;
        int index = 0;

        while(nodeI != nullptr && index < i) {
            nodeI = nodeI->link;
            index++;
        }

        int index = 0;

        while(nodeJ != nullptr && index < i) {
            nodeJ = nodeJ->link;
            index++;
        }

        if (nodeI == nullptr || nodeJ == nullptr) {
            return false;
        }

        int temp = nodeI->data;
        nodeI->data = nodeJ->data;
        nodeJ->data = temp;

        return true;
    }

    bool LinkedList::deleteFirst(int val) {
        Node* tempNode = head;
        int index = 0;

        while(tempNode != nullptr) {
            if (tempNode->data == val){
                return positionDelete(index);
            }
            tempNode = tempNode->link;
            index++;
        }

        return false;
    }