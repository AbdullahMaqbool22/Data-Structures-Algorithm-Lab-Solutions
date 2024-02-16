#include <iostream>
#include <string>
using namespace std;

struct node
{
    char data;
    node *next;
} *p = NULL, *t = NULL, *q = NULL;

void push(char x)
{
    t = new node;
    t->data = x;
    t->next = NULL;

    if (p == NULL)
    {
        p = t;
    }
    else
    {
        t->next = p;
        p = t;
    }
}

void display()
{
    if (p == NULL)
    {
        cout << "No data to show";
    }
    else
    {
        node *temp = p;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int main()
{
    int n, c = 0;
    char x;
    cout << "Enter the number of values to be pushed into stack: ";
    cin >> n;
    while (c < n)
    {
        cout << "Enter the value to be entered into stack = ";
        cin >> x;
        push(x);
        c++;
    }

    display();
    cout<<""<< check();

    return 0;
}

bool check()
{
    bool flag = false;

    if (p == NULL || p->next == NULL)
    {
        return false;
    }

    char r = p->data;
    node *q = p->next;

    if (r == '{' && q->data == '}')
    {
        flag = true;
    }

    return flag;
}

