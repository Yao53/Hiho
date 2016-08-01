//
//  main.cpp
//  3.KMP
//
//  Created by Yao on 16/8/1.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void getNext(vector<int>& next, string& s){
	next[0] = -1;
	next[1] = 0;
	int cur = 1;
	int i = 2;
	while(i < s.size()){
		if (cur != 0 && s[i - 1] != s[next[cur]])
			cur = next[cur];
		else{
			next[i++] = next[cur] + 1;
			cur = i - 1;
		}
	}
}

int getCount(vector<int>& next, string& s1, string& s2, int count){
	int p = 0, q = 0;
	while(p < s1.size()){
		if (q == s2.size()){
			++count;
			q = next[q];
		}
		if (q == -1 || s1[p] == s2[q]){
			++p;
			++q;
		}
		else{
			q = next[q];
		}
	}
	if (q == s2.size()) ++count;
	return count;
}

int main(int argc, const char * argv[]) {
	int N;
	cin >> N;
	string s1, s2;
	int count;
	while(N--){
		count = 0;
		cin >> s2 >> s1;
		vector<int> next(s1.size());
		getNext(next, s1);
		count = getCount(next, s1, s2, count);
		cout << count << endl;
	}
    return 0;
}
