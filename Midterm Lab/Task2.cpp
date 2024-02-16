#include <iostream>
using namespace std;

struct node
{
    string data;
    int gpa;
    int roll;
    struct node *link;
} *p, *r;

class queue_list
{
public:
    void insert(string x, int a);
    void display();
    void del();
    queue_list()
    {
        p = NULL;
        r = NULL;
    }
};

int main()
{
    int choice, x, gpa;
    string name;
    queue_list ql;
    while (1)
    {
        cout << "1.Enter Student" << endl;
        cout << "2.Delete Student" << endl;
        cout << "3.Check your pos." << endl;
        cout << "4.Quit" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            cout << "Enter your gpa: ";
            cin >> gpa;
            if (gpa >= 15 && gpa < 90)
            {
                cout << "Enter your name: ";
                cin.ignore();
                getline(cin, name);
                ql.insert(name, gpa);
            }
            else
            {
                cout << "Your gpa is invalid!";
            }
            cout << endl;
            break;

        case 2:
            ql.del();
            cout << endl;
            break;

        case 3:
            ql.display();
            cout << endl;
            break;

        case 4:
            exit(1);
            cout << endl;
            break;

        default:
            cout << "Wrong Choice" << endl;
            cout << endl;
        }
    }
    return 0;
}

void queue_list::insert(string x, int a)
{
    node *t;
    t = new node;
    t->data = x;
    t->gpa = a;
    t->link = NULL;
    if (p == NULL)
    {
        p = t;
        r = t;
    }
    else
    {

        node *prev = NULL, *current = p;
        while (current != NULL && current->gpa >= a)
        {
            prev = current;
            current = current->link;
        }

        if (prev == NULL)
        {
            t->link = p;
            p = t;
        }
        else
        {
            prev->link = t;
            t->link = current;
            if (current == NULL)
            {
                r = t;
            }
        }
    }
}

void queue_list::del()
{
    node *q;
    if (p == NULL)
    {
        cout << "No roll number present" << endl;
    }

    else
    {
        q = p;
        cout << "Student roll number: " << q->roll << endl;
        p = p->link;
        delete (q);
    }
}

void queue_list::display()
{
    node *q;
    q = p;
    if (p == NULL)
    {
        cout << "No names by now" << endl;
    }
    else
    {
        cout << "The names are: " << endl;
        while (q != NULL)
        {
            cout << q->data << endl;
            q = q->link;
        }
        cout << endl;
    }
}