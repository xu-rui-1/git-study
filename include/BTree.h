#pragma once
#include<iostream>
#include<queue>
using namespace std;

struct BTreeNode
{
    BTreeNode():val(0), left(nullptr), right(nullptr){};
    BTreeNode(int x):val(x), left(nullptr), right(nullptr){};

    int val;
    BTreeNode* left;
    BTreeNode* right;
};

class BTree
{
public:
    BTree();
    ~BTree();
    void insert(int val);
    void erase(int val);
    BTreeNode* root();
    void preOrder();
    void inOrder();
    void postOrder();
    void cengxu();
    int nodeNum();
    void destroy(BTreeNode* root);

private:
    void insert(BTreeNode* root, BTreeNode* node);
    void erase(BTreeNode* root, int val);
    BTreeNode* root(BTreeNode* root);
    void preOrder(BTreeNode* root);
    void inOrder(BTreeNode* root);
    void postOrder(BTreeNode* root);
    void cengxu(BTreeNode* root);
    int nodeNum(BTreeNode* root);

private:
    BTreeNode* _root;
    int _num;
};
