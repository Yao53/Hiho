//
//  main.cpp
//  10.GetPostOrderWithPreAndIn
//
//  Created by Yao on 16/8/5.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string pre, in;

void getPostOrder(int l1, int r1, int l2, int r2){
	if (l1 > r1 || l2 > r2) return ;
	if (l1 == r1){
		cout << pre[l1];
		return ;
	}
	char rootVal = pre[l1];
	int idx = l2;
	while(in[idx] != rootVal) ++idx;
	int len = idx - l2;
	getPostOrder(l1 + 1, l1 + len, l2, idx - 1);
	getPostOrder(l1 + len + 1, r1, idx + 1, r2);
	cout << rootVal;
}

int main(int argc, const char * argv[]) {
	cin >> pre >> in;
	int len = int(pre.size());
	getPostOrder(0, len - 1, 0, len - 1);
	cout << endl;
    return 0;
}
