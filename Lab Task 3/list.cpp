#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class list
{
    struct node
    {
        int data;
        node *link;
    } *p;

public:
void insLast(int);

    list(/* args */){
        p = NULL;
    }

    ~list();
};

void list :: insLast(int x){
    node *q, *t;
    if(p == NULL){
        p = new node;
        p->data = x;
        p->link = NULL;
    }
    else{
        q=p;
        while (q->link != NULL)
        {
            q=q->link;
        }
        
        
    }
}
