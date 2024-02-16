#include <iostream>
using namespace std;

class binaryTree {
    struct node {
        int data;
        node* right;
        node* left;
    }* root;

public:
    binaryTree() {
        root = NULL;
    }

    void insert(int data) {
        root = insertRec(root, data);
    }

    void preOrder() {
        preOrderRec(root);
        cout << endl;
    }

    void inOrder() {
        inOrderRec(root);
        cout << endl;
    }

    void postOrder() {
        postOrderRec(root);
        cout << endl;
    }

private:
    node* insertRec(node* q, int data) {
        if (q == NULL) {
            node* newNode = new node;
            newNode->data = data;
            newNode->left = newNode->right = NULL;
            return newNode;
        }

        if (data < q->data) {
            q->left = insertRec(q->left, data);
        } else if (data > q->data) {
            q->right = insertRec(q->right, data);
        }

        return q;
    }

    void preOrderRec(node* q) {
        if (q == NULL) return;
        cout << q->data << " ";
        preOrderRec(q->left);
        preOrderRec(q->right);
    }

    void inOrderRec(node* q) {
        if (q == NULL) return;
        inOrderRec(q->left);
        cout << q->data << " ";
        inOrderRec(q->right);
    }

    void postOrderRec(node* q) {
        if (q == NULL) return;
        postOrderRec(q->left);
        postOrderRec(q->right);
        cout << q->data << " ";
    }
};

int main() {
    binaryTree b;

    // Insert some values into the binary tree
    b.insert(9);
    b.insert(8);
    b.insert(3);
    b.insert(1);

    // Print the tree in different traversal orders
    cout << "Preorder traversal: ";
    b.preOrder();

    cout << "Inorder traversal: ";
    b.inOrder();

    cout << "Postorder traversal: ";
    b.postOrder();

    return 0;
}