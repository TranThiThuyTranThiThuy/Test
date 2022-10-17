#include<iostream>
using namespace std;
struct NODE
{
	int data;
	NODE* left;
	NODE* right;
};
typedef struct NODE* tree;
tree root;
tree CreatTree(tree& root)
{
	int x;
	cout << "Gia tri cua node: "; cin >> x;
	if (x != 0)
	{
		root = new NODE;
		root->data = x;
		root->left = NULL;
		root->right = NULL;
		cout << "con trai cua " << x << ": ";
		CreatTree(root->left);
		cout << "con phai cua " << x << ": ";
		CreatTree(root->right);
	}
	else root = NULL;
	return root;
}
void duong_di(tree root, int k)
{
	if (k < root->data)
	{
		cout << root->data << "\t";
		duong_di(root->left, k);
	}
	else if (k > root->data)
	{
		cout << root->data << "\t";
		duong_di(root->right, k);
	}
	else
		cout << root->data;
}
int so_le(tree root)
{
	if (root)
	{
		if (root->data % 2)
			return 1 + so_le(root->left) + so_le(root->right);
		return so_le(root->left) + so_le(root->right);
	}
	else return 0;
}
int nut_co_dung_mot_nut(tree root)
{
	if (!root) return 0;
	if (root->left && root->right)
		return nut_co_dung_mot_nut(root->left) + nut_co_dung_mot_nut(root->right);
	if (!root->left && !root->right)
		return 0;
	return 1 + nut_co_dung_mot_nut(root->left) + nut_co_dung_mot_nut(root->right);
}


int insertNode(tree& root, int k)
{
	if (root)
	{
		if (root->data == k) return 0;
		if (root->data < k)
			return insertNode(root->right, k);
		else
			return insertNode(root->left, k);
	}
	root = new NODE;
	if (!root)
		return -1;
	root->data = k;
	root->left = root->right = NULL;
	return 1;
}
void RNL(tree root, int k)
{
	if (root)
	{
		RNL(root->right, k);
		if (root->data > k)
			cout << root->data << "\t";
		RNL(root->left, k);
	}
}
int count(tree root, int x, int y)
{
	if (root)
	{
		if (root->data<x && root->data>y)
			return 1 + count(root->left, x, y) + count(root->right, x, y);
		return count(root->left, x, y) + count(root->right, x, y);
	}
	return 0;
}



int main()
{
	int k = 12;
	CreatTree(root);
	duong_di(root, k);
	cout << "\nso nut co gia tri la so le: " << so_le(root) << endl;
	cout << nut_co_dung_mot_nut(root);
	insertNode(root, 6);
	RNL(root, k);
	cout << count(root,30,15);
}