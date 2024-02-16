struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *findPeakElement(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *p = head->next;
    Node *q = head;

    if (q->data >= p->data)
    {
        return q;
    }

    while (p->next != nullptr)
    {
        if (p->data >= q->data && p->data >= p->next->data)
        {
            return p;
        }

        q = p;
        p = p->next;
    }
    if (p->data >= q->data)
    {
        return p;
    }

    return nullptr;
}