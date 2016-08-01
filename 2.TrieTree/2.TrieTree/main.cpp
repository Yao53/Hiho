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
public:
	int wordCount;
	bool wordEnd;
	TrieTreeNode *next[26];
	
	TrieTreeNode():wordCount(0), wordEnd(0){
		for (int i = 0; i < 26; ++i)
			next[i] = NULL;
	}
};

void initTree(TrieTreeNode* head, string& s, int deep){
	head->wordCount++;
	if (deep == s.size()){
		head->wordEnd = 1;
		return ;
	}
	int c = s[deep] - 'a';
	if (head->next[c] == NULL){
		head->next[c] = new TrieTreeNode();
	}
	initTree(head->next[c], s, deep + 1);
}

int search(TrieTreeNode* head, string &s, int deep){
	if (deep == s.size())
		return head->wordCount;
	int c = s[deep] - 'a';
	if (head->next[c] == NULL)
		return 0;
	else
		return search(head->next[c], s, deep + 1);
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
	TrieTreeNode *head = new TrieTreeNode();
	while(n--){
		cin >> s;
		initTree(head, s, 0);
	}
	cin >> m;
	while(m--){
		cin >> s;
		int wordCount = search(head, s, 0);
		cout << wordCount << endl;
	}
	delTree(head);
    return 0;
}
