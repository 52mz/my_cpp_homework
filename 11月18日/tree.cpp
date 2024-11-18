#include "tree.h"//tree.h中已经包含<string>
#include<iostream>



tree::tree(string pre, string in)
{
	this->root = InitTree(pre,in);
	/*之所以把构造函数和初始化函数(InitTree)分开来写是因为初始化
	函数需要递归，构造函数递归有点不合适*/
}

tree_node* tree::InitTree(string pre,string in)
{
	if (pre.length() == 0) {
		return nullptr;//递归结束的条件
	}
	if (in.length() == 0) {
		return nullptr;
	}
	char data = pre[0];//取出先序序列中的第一个元素作为根节点的数据
	tree_node* node = new tree_node();
	node->data = data;//存储数据
	node->left = nullptr;
	node->right = nullptr;
	int pos = 0;//记录根节点在中序序列的位置
	for (pos = 0; pos < in.length(); pos++) {
		if (in[pos] == data) {
			break;
		}
	}//循环结束的时候，pos的位置就是根节点中序序列的位置
	//pos之前的序列是左子树，pos之后的序列是右子树
	int left_num = pos;//左子树中节点的数量
	int right_num = pre.length() - 1 - pos;//右子树中节点的数量

	string left_pre = pre.substr(1, left_num);//左子树的先序序列
	string right_pre = pre.substr(left_num + 1, right_num);//右子树的先序序列
	string left_in = in.substr(0, left_num);
	string right_in = in.substr(pos + 1, right_num);

	node->left = InitTree(left_pre, left_in);//递归求解左子树
	node->right = InitTree(right_pre, right_in);//递归求解右子树
	return node;
}



void tree::PreOder(tree_node* node)//前序遍历
{
	//std::cout << "PreOder:" << endl;
  if (node == nullptr) { return; }
  else {
    std::cout << node->data;//先访问数据
    PreOder(node->left);//再到左子树
    PreOder(node->right);//再到右子树
  }
}


void tree::MidOder(tree_node* node)//中序遍历
{
	//std::cout << "MidOder:" << endl;
  if (node == nullptr)return;
 else {
    MidOder(node->left);//先左子树
    cout << node->data;//再数据
    MidOder(node->right);//最后右子树
  }
}

void tree::PosOder(tree_node* node)//后序遍历
{
	//std::cout << "PosOder:" << endl;
  if (node == nullptr)return;
  else {
   PosOder(node->left);//先左子树 
   PosOder(node->right);//最后右子树
   cout << node->data;//再数据
  }
}

tree::~tree()
{
	delete this->root;
}
