#include <iostream>
using namespace std;
template <class K>
class Node
{
private:
    int color;
    K key;
    Node *left;
    Node *right;
    Node *parent;

public:
    Node() {};
    Node(int color, K key, Node *left, Node *right, Node *parent)
    {
        this->color = color;
        this->key = key;
        this->left = left;
        this->right = right;
        this->parent = parent;
    }
    bool setColor(int color)
    {
        this->color = color;
        return true;
    }
    bool setKey(K key)
    {
        this->key = key;
        return true;
    }
    bool setLeft(Node *left)
    {
        this->left = left;
        return true;
    }
    bool setRight(Node *Right)
    {
        this->Right = Right;
        return true;
    }
    bool setParent(Node *Parent)
    {
        this->Parent = Parent;
        return true;
    }
    int getColor()
    {
        return this->color;
    }
    K getKey()
    {
        return this->key;
    }
    Node *getLeft()
    {
        return this->left;
    }
    Node *getRight()
    {
        return this->right;
    }
    Node *getParent()
    {
        return this->parent;
    }
};
template <class K>
class MYRBT
{
private:
    Node<K> *root;
    Node<K> *Nil;

public:
    MYRBT()
    {
    }
};