//
//  main.cpp
//  2.TrieTree
//
//  Created by Yao on 16/8/1.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class TreeNode{
	int wordCount;
	bool isWord;
	TreeNode *nextChar[26];
}TrieTreeNode;

void initTree()

int main(int argc, const char * argv[]) {
	int n, m;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		initTree(s);
	}
	cin >> m;
	while(m--){
		int wordCount = search(s);
		cout << wordCount << endl;
	}
	std::cout << "Hello, World!\n";
    return 0;
}
