#include <iostream>

using namespace std;

// implementing linked list(singly linked list from scratch)
// this is Node class and gives idea about what the node will store
class Node
{
public:
          int data;
          Node *next; // linked list contains data and pointer that points to the next node

          // constructor
          Node(int val)
          {
                    data = val;
                    next = NULL; // initially it will be null
          }
};

// list class
class List
{
private:
          // 2pointers here in private -> Head and Tail cuz we dont need to share it to other classes so it can be private
          Node *head;
          Node *tail;

public:
          // constructor
          List()
          {
                    head = tail = NULL;
          }

          // push_front() -> create new node -> head and tail will point to this

          void push_front(int val)
          {
                    // create new node
                    // syntax ->
                    Node *newNode = new Node(val);

                    if (head == NULL)
                    {
                              // linked list is empty initially
                              head = tail = newNode;
                              return;
                    }
                    else
                    {

                              // linked list is not empty -> head is Not NULL initially
                              newNode->next = head;
                              head = newNode;
                    }
          }

          // push_back ->

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
                              tail->next = newNode;
                              tail = newNode;
                    }
          }

          // pop_front() ->
          void pop_front()
          {
                    Node *temp = head;

                    if (head == NULL)
                    {
                              cout << "List is empty" << endl;
                              return;
                    }
                    else
                    {
                              head = head->next;
                              temp->next = NULL;
                              delete temp;
                    }
          }

          // pop_back() ->
          void pop_back()
          {
                    if (head == NULL)
                    {
                              return;
                    }

                    Node *temp = head;

                    while (temp->next != tail)
                    {
                              temp = temp->next;
                    }
                    temp->next = NULL;
                    delete tail;
                    temp = tail;
          }

          void insert(int val, int pos)
          {
                    if (pos < 0)
                    {
                              cout << "Invalid position" << endl;
                              return;
                    }

                    if (pos == 0)
                    {
                              push_front(val);
                              return;
                    }

                    Node *temp = head;
                    for (int i = 0; i < pos - 1; i++)
                    {
                              if (temp == NULL)
                              {
                                        cout << "Invalid position" << endl;
                              }
                              temp = temp->next;
                    }

                    Node *newNode = new Node(val);
                    newNode->next = temp->next;
                    temp->next = newNode;
          }

          // search in Linked List

          int search(int key)
          {
                    Node *temp = head;
                    int idx = 0;

                    while (temp != NULL)
                    {
                              if (temp->data == key)
                              {
                                        return idx;
                              }

                              temp = temp->next;
                              idx++;
                    }

                    return -1;
          }

          // print linked list ->
          void printLL()
          {
                    Node *temp = head;

                    while (temp != NULL)
                    {
                              cout << temp->data << "->";
                              temp = temp->next;
                    }
                    cout << "NULL" << endl;
          }
};

int main()
{

          List ll; // create linked list
          // ll.pop_front();
          ll.push_front(3);
          ll.push_front(2);
          ll.push_front(1);
          ll.insert(4, 2);
          // cout << "LL before popping_back: " << endl;
          // ll.printLL();
          // ll.pop_back();
          // cout << "LL after popping_back: " << endl;
          ll.printLL();

          cout << ll.search(4) << endl;

          return 0;
}