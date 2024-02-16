#include <iostream>
#include <string>
using namespace std;
struct node
{
    int id;
    int seats;
    string startTerminal;
    string endTerminal;
    int time;
    node *link;
} *p;

class Node
{
public:
    void seatReserve(string, string, int);
    void timePenalty();
};

void Node ::seatReserve(string startTerminal, string endTerminal, int seats)
{
    node *q;
    while (p != NULL)
    {
        if (startTerminal == "Karachi" || endTerminal == "Islamabad")
        {
            int s = 15;
            if (seats > s)
            {
                cout << "seats not allowed.";
            }

            else
            {
                q = p;
                q->startTerminal = startTerminal;
                q->endTerminal = endTerminal;
                q->seats = seats;
                p->link = q->link;
                p = q;
            }
        }
    }
}
