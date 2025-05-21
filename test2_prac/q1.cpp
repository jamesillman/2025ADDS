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
        bool insertAt(int pos, int value);
        bool deleteAll(int value);
        void reverse();
        int findMiddle();
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

    void LinkedList::headDelete() {
        if (head != nullptr) {
            Node* temp = head;
            head = head->link;
            delete temp;
        }
    }

    bool LinkedList::insertAt(int pos, int value) {

        if (pos == 0) {
            Node* newNode = new Node(value, head);
            head = newNode;
        }

        int index = 0;
        Node* temp = head;
        while (temp != nullptr && index < pos -1) {
            index++;
            temp = temp->link;
        }

        Node* newNode = new Node(value, temp->link);
        temp->link = newNode;
    }

    bool LinkedList::deleteAll(int value) {
        int index = 0;
        Node* temp = head;

        while (temp != nullptr && temp->link != nullptr) {

            if (temp->link->data == value){
                Node* toDelete= temp->link;
                temp->link = temp->link->link;
                delete toDelete;
            } else {
                temp = temp->link;
            }

            index++;
            temp = temp->link;
        }
    }

    void LinkedList::reverse() {
        Node* prev = nullptr;   // Initially, there's no previous node
        Node* current = head;   // Start with the head node
        Node* next = nullptr;   // To store the next node temporarily
    

        while(current != nullptr) {
            next = current->link;
            current->link = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    int LinkedList::findMiddle() {

        if (head == nullptr) {
            // Return a special value if the list is empty
            return -1; // or another appropriate error value
        }
        
        Node* slow = head;
        Node* fast = head;

        while(fast != nullptr && fast->link != nullptr) {
            fast = fast->link->link;
            slow = slow->link;
            
        }
        return slow->data;
    }