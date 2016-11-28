#ifndef BINSEARCHTREE
#define BINSEARCHTREE

#include <iostream>

using namespace std;

template<class T>
class BinSearchTree
{
public:
  
  class TreeNode
  {
  public:
    
    TreeNode(T obj=T()) :
      content(obj), left(NULL), right(NULL)
    {}
    
    virtual ~TreeNode() {}
    
  protected:
    
    T content;
    TreeNode *left, *right;
    
    friend class BinSearchTree;
  };
  
  BinSearchTree() : root(NULL) {}
  
  virtual ~BinSearchTree()
  {
    if (root) {
      destroy(root);
    }
  }
  
  void push_back(const T &obj)
  {
    if (!root) {
      root = new TreeNode(obj);
    } else {
      add_leaf(obj, root);
    }
  }
  
  void display()
  {
    if (root) {
      display_node(root);
    }
  }
  
protected:
  
  TreeNode *root;
  
  void destroy(TreeNode *ptr)
  {
    if (ptr->left) {
      destroy(ptr->left);
    }
    
    if (ptr->right) {
      destroy(ptr->right);
    }
    
    delete ptr;
  }
  
  void add_leaf(const T &obj, TreeNode *parent)
  {
    if (obj < parent->content) {
      if (!parent->left) {
	parent->left = new TreeNode(obj);
      } else {
	add_leaf(obj, parent->left);
      }
    }
    
    if (obj > parent->content) {
      if (!parent->right) {
	parent->right = new TreeNode(obj);
      } else {
	add_leaf(obj, parent->right);
      }
    }
  }
  
  void display_node(TreeNode *node)
  {
    if (node->left) {
      display_node(node->left);
    }
    
    cout << node->content << endl;
    
    if (node->right) {
      display_node(node->right);
    }
  }
};

#endif
