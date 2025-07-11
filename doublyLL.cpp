#include <iostream>

using namespace std;

// doubly linked list

class Node
{
public:
          int data;
          Node *next;
          Node *prev;

          // constructor
          Node(int val)
          {
                    data = val;
                    next = prev = NULL;
          }
};

class DoublyLL
{
private:
          Node *head;
          Node *tail;

public:
          // constructor
          DoublyLL()
          {
                    head = tail = NULL;
          }

          void push_front(int val)
          {
                    // create new node
                    Node *newNode = new Node(val);

                    if (head == NULL)
                    {
                              head = tail = newNode;
                              return;
                    }
                    else
                    {
                              newNode->next = head;
                              head->prev = newNode;
                              head = newNode;
                    }
          }

          void push_back(int val)
          {
                    Node *newNode = new Node(val);

                    if (head == NULL)
                    {
                              head = tail = newNode;
                              return;
                    }
                    else
                    {
                              newNode->prev = tail;
                              tail->next = newNode;
                              tail = newNode;
                    }
          }

          void pop_front()
          {
                    Node *temp = head;
                    if (head == NULL)
                    {
                              cout << "List is empty" << endl;
                    }

                    head = head->next;

                    if (head != NULL)
                    {
                              head->prev = NULL;
                              temp->next = NULL;
                              delete temp;
                    }
          }

          void pop_back()
          {
                    Node *temp = tail;
                    if (head == NULL)
                    {
                              cout << "List is empty " << endl;
                    }
                    tail = tail->prev;

                    if (tail != NULL)
                    {
                              tail->next = NULL;
                    }
                    temp->prev = NULL;
                    delete temp;
          }

          void printLL()
          {
                    Node *temp = head;

                    while (temp != NULL)
                    {
                              cout << temp->data << " <=> ";
                              temp = temp->next;
                    }
                    cout << "NULL" << endl;
          }
};

int main()
{
          DoublyLL ll;

          ll.push_front(1);
          ll.push_front(2);
          ll.push_front(3);
          ll.push_back(5);

          ll.printLL();
          ll.pop_front();
          ll.printLL();
          ll.pop_back();
          ll.printLL();

          return 0;
}