#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // cunstructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data" << value << endl;
    }
};
void insertNode(Node *&tail, int element, int d)
{
    // assuming that the element us presebt in the list;

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        // assuming that the element is present in the last

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found ->curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;

    } while (tail->next != temp);
    cout << endl;
}
bool iscircularlist(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return false;
    }
    if (temp == head)
    {
        return true;
    }
}
int main()

{
    Node *tail = NULL;
    // empty list insert krre hai
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 8);
    print(tail);
    insertNode(tail, 3, 8);
    print(tail);
    if (iscircularlist(tail))
    {
        cout << "the linked list is a circular linked list";
    }
    else
        {
            cout << "given linked list is not a circular linked list";
}
            return 0;
}