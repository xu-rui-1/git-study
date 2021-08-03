#include"BTree.h"

BTree::BTree()
{
    _root = nullptr;
    _num = 0;
}
void BTree::insert(int val)
{
    BTreeNode* node = new BTreeNode(val);
    insert(_root, node);
}
void BTree::erase(int val)
{

}
BTreeNode* BTree::root()
{
    return root(_root);
}
void BTree::preOrder()
{
    preOrder(_root);
}

void BTree::inOrder()
{
    inOrder(_root);
}

void BTree::postOrder()
{
    postOrder(_root);
}

void BTree::cengxu()
{
    cengxu(_root);
}

int BTree::nodeNum()
{
    return nodeNum(_root);
}

void BTree::insert(BTreeNode* root, BTreeNode* node)
{
    if(root == nullptr)
    {
        _root = node;
        _num++;
        return;
    }
    BTreeNode* tmp = root;
    BTreeNode* pTmp = nullptr;
    while(tmp)
    {
        if(tmp->val > node->val)
        {
            pTmp = tmp;
            tmp = tmp->left;
        }
        else if(tmp->val == node->val)
        {
            cout << "insert failed." << endl;
            return;
        }
        else
        {
            pTmp = tmp;
            tmp = tmp->right;
        }
    }

    if(pTmp->val > node->val)
    {
        pTmp->left = node;
    }
    else
    {
        pTmp->right = node;
    }
    _num++;
}

void BTree::erase(BTreeNode* root, int val)
{
    
}

BTreeNode* BTree::root(BTreeNode* root)
{
    return _root;
}

void BTree::preOrder(BTreeNode* root)
{
    if(root == nullptr)
    {
        return;
    }
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void BTree::inOrder(BTreeNode* root)
{
    if(root == nullptr)
    {
        return;
    }
    preOrder(root->left);
    cout << root->val << " ";
    preOrder(root->right);
}

void BTree::postOrder(BTreeNode* root)
{
    if(root == nullptr)
    {
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
    cout << root->val << " ";
}

void BTree::cengxu(BTreeNode* root)
{
    if(root == nullptr) return;
    queue<BTreeNode*> que;
    que.push(root);
    while(!que.empty())
    {
        BTreeNode* node = que.front();
        que.pop();
        cout << node->val << " ";
        if(node->left) que.push(node->left);
        if(node->right) que.push(node->right);
    }
}

int BTree::nodeNum(BTreeNode* root)
{
    return _num;
}

void BTree::destroy(BTreeNode* root)
{
    if(root == nullptr) return;
    BTreeNode* node = root;
    destroy(node->left);
    destroy(node->right);
    delete node;
    node = nullptr;
}

BTree::~BTree()
{
    if(_root != nullptr)
    {
        destroy(_root);
    }
}
