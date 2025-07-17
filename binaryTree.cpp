#include <iostream>
#include <vector>
#include <queue>
#include <map>
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
              left = right = NULL;
       }
};

static int idx = -1;
Node *buildTree(vector<int> preorder)
{
       idx++;

       // check if idx is -1 then return null;

       if (preorder[idx] == -1)
       {
              return nullptr;
       }
       // create new Node
       Node *root = new Node(preorder[idx]);

       // build left subtree
       root->left = buildTree(preorder);

       // build right subtree
       root->right = buildTree(preorder);

       return root;
}

// tree traversal
// preorder tree traversal

void preOrder(Node *root)
{
       // root -> left ->right
       if (root == nullptr)
       {
              return;
       }

       cout << root->data << " ";
       // recursive call for left tree
       preOrder(root->left);

       // recursive call for right tree
       preOrder(root->right);
}

// inorder traversal
// left->root->right
void inOrder(Node *root)
{
       // base case
       if (root == nullptr)
       {
              return;
       }

       inOrder(root->left);

       cout << root->data << " ";

       inOrder(root->right);
}

// post order
// left->right->root

void postorder(Node *root)
{
       if (root == nullptr)
       {
              return;
       }
       postorder(root->left);
       postorder(root->right);
       cout << root->data << " ";
}

// level order traversal
// goes from level to level

void levelorder(Node *root)
{
       queue<Node *> q;

       q.push(root);
       q.push(nullptr);

       while (!q.empty())
       {
              Node *curr = q.front();
              q.pop();
              // to print levels in different lines
              if (curr == nullptr)
              {
                     if (!q.empty())
                     {
                            cout << endl;
                            q.push(nullptr);
                            continue;
                     }
                     else
                     {
                            break;
                     }
              }
              cout << curr->data << " ";
              if (curr->left != nullptr)
              {
                     q.push(curr->left);
              }
              if (curr->right != nullptr)
              {
                     q.push(curr->right);
              }
       }
}

int height(Node *root)
{
       if (root == nullptr)
       {
              return 0;
       }

       int leftHt = height(root->left);
       int rightht = height(root->right);

       return (max(leftHt, rightht)) + 1;
}

int count(Node *root)
{
       if (root == nullptr)
       {
              return 0;
       }
       int leftCount = count(root->left);
       int rightCount = count(root->right);

       return (leftCount + rightCount) + 1;
}

// sum
int sum(Node *root)
{
       if (root == nullptr)
       {
              return 0;
       }

       int leftSum = sum(root->left);
       int rightSum = sum(root->right);

       return leftSum + rightSum + root->data;
}

// top view of binary tree
void topView(Node *root)
{
       // level order traversal first
       queue<pair<Node *, int>> q;
       map<int, int> m;

       q.push({root, 0});

       while (!q.empty())
       {
              Node *curr = q.front().first;
              int currHD = q.front().second;
              q.pop();

              if (m.find(currHD) == m.end())
              {
                     m[currHD] = curr->data;
              }

              if (curr->left != nullptr)
              {
                     q.push({curr->left, currHD - 1});
              }
              if (curr->right != nullptr)
              {
                     q.push({curr->right, currHD + 1});
              }
       }

       for (auto it : m)
       {
              cout << it.second << " ";
       }
       cout << endl;
}

void KthLevel(Node *root, int k)
{
       if (root == nullptr)
       {
              return;
       }
       if (k == 1)
       {
              cout << root->data << " ";
              return;
       }

       KthLevel(root->left, k - 1);
       KthLevel(root->right, k - 1);
}

int sumTree(Node *root)
{
       if (root == nullptr)
              return 0;

       int leftsum = sumTree(root->left);
       int rightsum = sumTree(root->right);
       root->data += leftsum + rightsum;

       return root->data;
}

int main()
{

       vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

       Node *root = buildTree(preorder);

       // cout << root->data << endl;
       // cout << root->left->data << endl;
       // cout << root->right->data << endl;

       // preOrder(root);
       // cout << endl;
       // inOrder(root);
       // cout << endl;
       // postorder(root);
       // cout << endl;
       // levelorder(root);
       // cout << endl;
       // cout << "Height : " << height(root) << " ";
       // cout << endl;
       // cout << "Number of nodes: " << count(root) << " ";
       // cout << endl;
       // cout << "Sum of nodes: " << sum(root) << " ";
       // cout << endl;
       // topView(root);
       // KthLevel(root , 2);
       cout << "Before conversion: ";
       preOrder(root);
       cout << endl;
       sumTree(root);
       cout << endl;
       cout << "after conversion: ";
       preOrder(root);

       return 0;
}