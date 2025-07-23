#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
       int data;
       Node *left;
       Node *right;

       Node(int val)
       {
              data = val;
              left = right = nullptr;
       }
};

Node *insert(Node *root, int val)
{
       if (!root)
       {
              return new Node(val);
       }

       if (val < root->data)
       {
              root->left = insert(root->left, val);
       }
       else
       {
              root->right = insert(root->right, val);
       }
}

void inorder(Node *root)
{
       if (!root)
       {
              return;
       }

       inorder(root->left);
       cout << root->data << " ";
       inorder(root->right);
}

Node *buildBST(vector<int> &arr)
{
       Node *root = nullptr;

       for (int val : arr)
       {
              root = insert(root, val);
       }

       return root;
}

bool search(Node *root, int key) //tc = O(height of bst)
{
       if (!root)
              return false;

       if (root->data == key)
              return true;

       if (root->data > key)
              return search(root->left, key);
       else
              return search(root->right, key);
}

int main()
{
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       vector<int> arr = {3, 2, 1, 5, 6, 4};
       Node *root = buildBST(arr);
       inorder(root);

       cout << endl;

       cout << search(root , 9);

       return 0;
}