#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int value;
    Node* right = NULL;
    Node* left = NULL;
};


class BinaryTree {
    public:
    Node* root;

    BinaryTree() {
        this->root = nullptr;
    }


    void insert(int value) {
        if (!root) {
            root = new Node;
            root->value = value;
            return;
        }

        Node* current = this->root;
        while(1) {
            if (current->value > value) {

                if (!current->left) {
                    Node* newNode = new Node;
                    newNode->value = value;
                    current->left = newNode;
                    return;
                }
                current = current->left;
            } else if (current->value < value) {

                if (!current->right) {
                    Node* newNode = new Node;
                    newNode->value = value;
                    current->right = newNode;
                    return;
                }
                current = current->right;
            }
        }
    }

    void remove() {

    }

    // Node* find() {

    // }

    void levelPrint() {

    }
};

void getValue(Node const &node) {
    cout << node.value << endl;
}

int main() {
    BinaryTree* tree = new BinaryTree();
    tree->insert(100);
    cout << tree->root->value << endl;
    tree->insert(50);
    cout << tree->root->left->value << endl;



    return 0;
}
