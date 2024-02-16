#include <iostream>
using namespace std;

class node
{
    int num;
    node *next;

public:
    node() {}

    void set_num(int n)
    {
        num = n;
    }

    int get_num()
    {
        return num;
    }

    void set_next(node *n1)
    {
        next = n1;
    }

    node *get_next()
    {
        return next;
    }
};

class linkList
{
    node *head;

public:
    linkList()
    {
        head = NULL;
    }

    void insert(int n)
    {
        node *nn = new node;
        nn->set_num(n);
        nn->set_next(head);
        head = nn;
    }

    void insert_at_tail(int data)
    {
        node *newNode = new node;
        newNode->set_num(data);
        newNode->set_next(NULL);
        node *tmp = head;

        if (tmp != NULL)
        {
            while (tmp->get_next() != NULL)
            {
                tmp = tmp->get_next();
            }
            tmp->set_next(newNode);
        }
        else
        {
            head = newNode;
        }
    }

    void del()
    {
        if (head == NULL)
        {
            cout << "\nList is empty\n";
        }
        else
        {
            node *tmp = head;
            cout << "\nThe deleting element is " << head->get_num() << "\n";
            head = head->get_next();
            delete tmp;
        }
    }

    void bubbleSort()
    {
        int n = 0;
        node *p = head;

        while (p != NULL)
        {
            n++;
            p = p->get_next();
        }

        for (int i = 0; i < n - 1; i++)
        {
            p = head;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (p->get_num() > p->get_next()->get_num())
                {
                    int hold = p->get_num();
                    p->set_num(p->get_next()->get_num());
                    p->get_next()->set_num(hold);
                }
                p = p->get_next();
            }
        }
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "\nList is empty\n";
        }
        else
        {
            node *tmp = head;
            while (tmp != NULL)
            {
                cout << tmp->get_num() << " ";
                tmp = tmp->get_next();
            }
            cout << "\n";
        }
    }
};

int main()
{
    linkList p;
    int c = 0, n;

    while (c != 5)
    {
        cout << "Press 1 for insert number\n";
        cout << "Press 2 for delete number.\n";
        cout << "Press 3 for display numbers.\n";
        cout << "Press 4 for sort.\n";
        cout << "Press 5 for exit.\n";
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Enter the number to insert: ";
            cin >> n;
            p.insert(n);
            break;

        case 2:
            p.del();
            break;

        case 3:
            // use system clear screen here
            p.display();
            break;

        case 4:
            p.bubbleSort();
            break;
        }
    }

    getchar();
    return 0;
}
