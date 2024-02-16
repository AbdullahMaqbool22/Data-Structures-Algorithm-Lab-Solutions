#include <iostream>
using namespace std;

class bst
{
    struct node
    {
        int data;
        node *left;
        node *right;
    } *root;

public:
    int insert(int data);
    void preorder(node *);
    void inorder(node *);
    void postorder(node *);
    void display(int order);

    bst()
    {
        root = NULL;
    }
};

int bst ::insert(int data)
{
    if (root == NULL)
    {
        root = new node;
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return 0;
    }

    node *q = root;
    while (q != NULL)
    {
        if (data == q->data)
        {
            cout << "Already exist";
            return 0;
        }
        else if (data < q->data)
        {
            if (q->left != NULL)
            {
                q = q->left;
            }
            else
            {
                q->left = new node;
                q->left->data = data;
                q->left->left = NULL;
                q->left->right = NULL;
                return 0;
            }
        }
        else
        {
            if (q->right != NULL)
            {
                q = q->right;
            }
            else
            {
                q->right = new node;
                q->right->data = data;
                q->right->left = NULL;
                q->right->right = NULL;
                return 0;
            }
        }
    }
    return 0;
}

void bst::preorder(node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        preorder(p->left);
        preorder(p->right);
    }
}

void bst::inorder(node *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        cout << p->data << " ";
        inorder(p->right);
    }
}

void bst::postorder(node *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout << p->data << " ";
    }
}

void bst::display(int order)
{
    switch (order)
    {
    case 1:
        cout << "Inorder Traversal: ";
        inorder(root);
        break;
    case 2:
        cout << "Preorder Traversal: ";
        preorder(root);
        break;
    case 3:
        cout << "Postorder Traversal: ";
        postorder(root);
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
    cout << endl;
}

int main()
{
    bst tree;

    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    // Display in-order traversal
    tree.display(1);

    // Display pre-order traversal
    tree.display(2);

    // Display post-order traversal
    tree.display(3);

    return 0;
}
