#include<iostream>
using namespace std;
#include<vector>
#include<string>


struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};

//方法二：
bool Check(TreeNode* A, TreeNode* B)
{
	if (!A&&!B) return true;
	if ((!A&&B) || (!B&&A)) return false;

	if (A->val != B->val)
		return false;
	return Check(A->left, B->left) && Check(A->right, B->right);
}


bool chkIdentical(TreeNode* A, TreeNode* B)
{
	typedef TreeNode Node;
	if (!B) return true;
	if (!A&&B) return false;

	if (Check(A, B)) return true;
	return chkIdentical(A->left, B) || chkIdentical(A->right, B);

}
//方法一
string ToString(TreeNode* root)
{
	typedef TreeNode Node;
	if (root == NULL) return "#!";
	string res = to_string(root->val) + "!";
	return res + ToString(root->left) + ToString(root->right);
}

bool chkIdentical(TreeNode* A, TreeNode* B) 
{
	typedef TreeNode Node;
	string str1 = ToString(A);
	string str2 = ToString(B);
	return str1.find(str2) != string::npos;

}
