//
//  main.cpp
//  12.TreeDP
//
//  Created by Yao on 16/8/2.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <queue>

#define MAX(x,y) ((x)>(y)?(x):(y))
#define SWAP(a, b) (a ^= b, b ^= a, a ^= b)

using namespace std;

typedef long long ll;

int score[101];


struct TreeNode{
	int val;
	vector<int> children;
	TreeNode(int v):val(v){}
};

TreeNode* initTree(vector<int> &data, int idx){
	if (idx >= data.size()) return NULL;
	TreeNode* root = new TreeNode(data[idx]);
	return root;
}

int main(int argc, const char * argv[]) {
	
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; ++i)
		cin >> score[i];
	
	return 0;
}
