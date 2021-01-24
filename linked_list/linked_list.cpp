#include <iostream>

class Node {
    public:
        int element;
        Node* next;

        Node(int element) : element(element) {}
};

class LinkedList {
    
    public:
        Node* head;
        int length = 0;

        void insert(int value, int position) {
            Node* node = new Node(value);
            Node* prev = this->head;
            int i = 0;

            if (position == 0) {

                node->next = this->head;
                this->head = node;
                i = this->length + 1;
            }

            for (i; i <= this->length; ++i) {

                if (i == position - 1) {
                    node->next = prev->next;
                    prev->next = node;
                    break;
                }
                prev = prev->next;
            }
            ++this->length;
        }

        void printElements() {
            Node* node = this->head;
            for (int i = 0; i < this->length; ++i) {
                std::cout << node->element << " ";
                node = node->next;
            }
            std::cout << std::endl;
        }
};

int main() {
    LinkedList x = LinkedList();
    x.insert(4, 0);
    x.insert(2,0);
    x.insert(10,1);
    x.insert(2000,1);
    x.insert(777, 0);
    x.insert(666, 1);
    x.printElements();
    return 0;
}