// Iterative C++ program to reverse a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node
{
    int data;
    struct Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList
{
    Node *head;
    LinkedList() { head = NULL; }

    /* Function to reverse the linked list */
    void reverse()
    {
        // Initialize current, previous and next pointers
        Node *current = head;
        Node *prev = NULL, *next = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
        
            prev = current;
            current = next;
        }
        head = prev;
    }

    void print()
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    /*8, 3, 4, 9, 5, 3, 2*/
    LinkedList ll;
    ll.push(8);
    ll.push(3);
    ll.push(9);
    ll.push(5);
    ll.push(3);
    ll.push(2);
    ll.push(55);

    cout << "Given linked list\n";
    ll.print();

    ll.reverse();

    cout << "\nReversed linked list \n";
    ll.print();
    return 0;
}
