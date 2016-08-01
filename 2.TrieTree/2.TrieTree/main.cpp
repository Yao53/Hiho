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

class TrieTreeNode{
	int wordCount;
	bool isWord;
public:
	TrieTreeNode *next[26];
	TrieTreeNode(int wc, bool iw):wordCount(wc), isWord(iw){
		for (int i = 0; i < 26; ++i)
			next[i] = NULL;
	}
	~TrieTreeNode(){
		
	}
};

void initTree(TrieTreeNode* head, string& s){
	
}

int search(TrieTreeNode* head, string &s){
	return 0;
}
void delTree(TrieTreeNode* head){
	for (int i = 0; i < 26; i++){
		if (head->next[i] != NULL)
			delTree(head->next[i]);
	}
	delete head;
}

int main(int argc, const char * argv[]) {
	int n, m;
	string s;
	cin >> n;
	TrieTreeNode *head = new TrieTreeNode(0, 0);
	while(n--){
		cin >> s;
		initTree(head, s);
	}
	cin >> m;
	while(m--){
		int wordCount = search(head, s);
		cout << wordCount << endl;
	}
	delTree(head);
    return 0;
}
