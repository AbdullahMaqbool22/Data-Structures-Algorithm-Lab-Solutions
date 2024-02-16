#include<iostream>
using namespace std;
struct node{
int data;
node *q;
}*p;
node *pNode = NULL;
class list{
public:
list(){
    p = NULL;
}
};
int main(){
    p =(node*)malloc(sizeof(node));

    p -> q = NULL;
    if (pNode == NULL)
    {
        pNode = p;
        p ->q = p;
    }
    else{
        p -> q = pNode -> q;
        pNode -> q = p;
        pNode = p;
    }
    return 0;
}
