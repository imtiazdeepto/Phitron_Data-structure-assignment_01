// Liked list
//  at: Mon 1 july 2024 2:34 am
//@handle: Imtiaz Deepto
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert_tail(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void printLinkedlist(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_position(node *&head, int pos, int val)
{
    node *newnode = new node(val);
    node *temp = head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Index access....Resubmit...";
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void insert_at_head(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
void delete_at_position(node *head, int pos)
{
    if (head == NULL)
    {
        cout << endl
             << "!!!WARNING!!!!\nlist is Empty...Resubmit.." << endl
             << endl;
        return;
    }
    node *temp = head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "!!!WARNING!!!!\nInvalid Index access....Resubmit..." << endl
                 << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << "!!!WARNING!!!!\nInvalid Index access....Resubmit..." << endl
             << endl;
        return;
    }
    node *tempdelete = temp->next;
    temp->next = temp->next->next;
    delete tempdelete;
    cout << endl
         << "Value is Deleted" << endl
         << endl;
}
void delete_head(node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "!!!WARNING!!!!\nlist is Empty...Resubmit.." << endl
             << endl;
        return;
    }
    node *temp_head = head;
    head = head->next;
    delete temp_head;
    cout << endl
         << "Head is Deleted" << endl
         << endl;
}
signed main()
{
    node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at position" << endl;
        cout << "Option 4: Delete at any position" << endl;
        cout << "Option 5: Take input" << endl;
        cout << "Option 6: Terminate" << endl
             << endl;
        int op;
        cout << "Choose any option: ";
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_tail(head, v);
            cout << endl
                 << "Value is inserted" << endl
                 << endl;
        }
        else if (op == 2)
        {
            cout << "linked list: ";
            printLinkedlist(head);
            cout << endl

                 << "Value is Printed" << endl
                 << endl;
        }
        else if (op == 6)
        {
            break;
            cout << endl
                 << "Programm Terminated" << endl
                 << endl;
        }
        else if (op == 3)
        {
            cout << "Please enter position :";
            int pos, val;
            cin >> pos;
            cout << "Enter the value: ";
            cin >> val;
            if (pos == 0)
                insert_at_head(head, val);
            else
                insert_at_position(head, pos, val);
            cout << endl
                 << "Value is inserted at " << pos << " position" << endl
                 << endl;
        }
        else if (op == 4)
        {
            cout << "Enter the position: ";
            int pos;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_at_position(head, pos);
            }
        }
        else if (op == 5)
        {
            int val;
            while (true)
            {
                cin >> val;
                if (val == -1)
                    break;
                insert_tail(head, val);
            }
            cout << endl;
        }
        else
        {
            cout << endl
                 << "Wrong input......Terminate the programe";
            break;
        }
    }
    return 0;
}
