//类名用小写和下划线，成员方法用大写开头没有下划线
#pragma once
#include<iostream>
#include<string>
using namespace std;
class tree_node
{
  public:
  string data;//数据域
  tree_node* left;//左子树
  tree_node* right;//右子树
};

class tree
{
  public:
  //tree();
  tree(string pre,string in);
  ~tree();
  tree_node* root;//根节点
  tree_node* InitTree(string pre,string in);
  void PreOder(tree_node* node);//前序遍历
  void MidOder(tree_node* node);//中序遍历
  void PosOder(tree_node* node);//后序遍历
};
