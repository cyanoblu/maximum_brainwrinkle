#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *pNext;
};

void findValue(Node fHead, int fValue)
/* Iterate recursively over linked list until Node.val matches value, or not.
O(n) */
{

    if (fHead.val == fValue)
    {
        std::cout << "Found!";
    }
    else
    {
        if (fHead.pNext)
        {
            return findValue(*fHead.pNext, fValue);
        }
        else
        {
            std::cout << "Not found!";
        }
    };
};

int main()
{
    /* Define the linked list */
    Node fifthNode;
    fifthNode.val = 5;
    fifthNode.pNext = nullptr;
    Node fourthNode;
    fourthNode.val = 4;
    fourthNode.pNext = &fifthNode;
    Node thirdNode;
    thirdNode.val = 3;
    thirdNode.pNext = &fourthNode;
    Node secondNode;
    secondNode.val = 2;
    secondNode.pNext = &thirdNode;
    Node firstNode;
    firstNode.val = 1;
    firstNode.pNext = &secondNode;

    findValue(firstNode, 9);
    return 0;
};