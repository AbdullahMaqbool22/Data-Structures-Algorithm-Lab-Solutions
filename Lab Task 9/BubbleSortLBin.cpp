#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *pre;
    node()
    {
        next = NULL;
        pre = NULL;
        data = 0;
    }
};
class linkList
{
    node *head;
    int count;

public:
    linkList()
    {
        head = NULL;
        count = 0;
    }
    void insert(int data)
    {
        node *p = head;
        node *newNode = new node;
        newNode->data = data;
        head = newNode;
        newNode->next = p;
        if (p != NULL)
        {
            p->pre = newNode;
            count++;
        }
    }
    void display()
    {
        node *p;
        p = head;
        while (p != NULL)
        {
            cout << p->data << " ";
            if (p->next == NULL)
                break;
            p = p->next;
        }
    }
    void bubble()
    {
        int tmp = 0, i = 0;
        node *p = head->next, *q = head, *r, *s;
        r = p;
        s = q;
        while (p != NULL)
        {
            if (p->data < q->data)
            {
                tmp = p->data;
                p->data = q->data;
                q->data = tmp;
            }
            q = p;
            p = p->next;
        }
        i++;
    }
    node *binary_search(int data, int left, int right)
    {
        node *p;
        p = head;
        int mid = (left + right) / 2;
        for (int i = 0; i < mid; i++)
        {
            p = p->next;
        }
        if (p->data == data)
        {
            return p;
        }
        if (left - right == 0)
        {
            return NULL;
        }
        if (data < p->data)
        {
            return binary_search(data, left, mid);
        }
        else
        {
            return binary_search(data, mid + 1, right);
        }
    }
    int getCount()
    {
        return count;
    }
};
int main()
{
    srand(time(0));
    linkList a;
    for (int i = 1; i <= 10; i++)
        a.insert(rand() % 100);
    a.display();
    cout << endl;
    a.bubble();
    a.display();
    int data;
    cout << endl
         << "Enter data: ";
    cin >> data;
    node *p = a.binary_search(data, 1, a.getCount());
    if (p != NULL)
        cout << p->data << " " << p;
    else
        cout << p << "NO DATA EXISTS";

    getchar();
}