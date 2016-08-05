//
//  main.cpp
//  10.PostOrderWithRecursion
//
//  Created by Yao on 16/8/5.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode{
	int val;
	TreeNode *lc, *rc;
	TreeNode(int v):val(v), lc(NULL), rc(NULL){}
};

TreeNode* initTree(vector<int> &data, int idx){
	if (idx < data.size() && data[idx] != 0){
		TreeNode* h = new TreeNode(data[idx]);
		h->lc = initTree(data, idx * 2);
		h->rc = initTree(data, idx * 2 + 1);
		return h;
	}
	else return NULL;
}

void postOrder(TreeNode *head){
	if (head != NULL){
		postOrder(head->lc);
		postOrder(head->rc);
		cout << head->val << endl;
	}
}

int main(int argc, const char * argv[]) {
	vector<int> data{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	TreeNode *root = initTree(data, 1);
	postOrder(root);
    return 0;
}
