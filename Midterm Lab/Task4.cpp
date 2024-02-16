#include <iostream>
using namespace std;

class Stack
{
public:
    struct node
    {
        int data;
        node *link;
    } *p = NULL, *q = NULL, *r = NULL;

    void push(int data);
    int pop();
    void disp();
    void reverse();
};

void Stack::push(int x)
{
    r = new node;
    r->data = x;
    r->link = NULL;
    if (p == NULL)
    {
        p = r;
    }
    else
    {
        r->link = p;
        p = r;
    }
}

int Stack::pop()
{
    int x;
    if (p != NULL)
    {
        node *temp = p;
        x = temp->data;
        p = p->link;
        delete temp;
    }
    return x;
}

void Stack::reverse()
{
    Stack h;
    int x;

    while (p != NULL)
    {
        x = h.pop();
        h.push(x);
    }

    cout << "Reversed list: ";
    h.disp();
}

void Stack::disp()
{
    q = p;
    if (q == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack items: ";
    while (q != NULL)
    {
        cout << q->data << " ";
        q = q->link;
    }
    cout << endl;
}

int main()
{
    int ch, x;
    Stack t;

    while (true)
    {
        cout << "\n1. Push \n2. Pop \n3. Reverse \n4. Exit\n\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the element to push: ";
            cin >> x;
            t.push(x);
            break;
        case 2:
            x = t.pop();
            if (x != -1)
                cout << "Popped element: " << x << endl;
            else
                cout << "Stack is empty!" << endl;
            break;
        case 3:
            t.reverse();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice! Please enter a valid option." << endl;
        }
    }

    return 0;
}
