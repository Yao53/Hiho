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

using namespace std;

struct Node{
	int cost;
	Node *lc, *rc;
	Node():cost(0),lc(NULL), rc(NULL){}
};

int main(int argc, const char * argv[]) {
	
	int N, M;
	cin >> N >> M;
	int *c = (int *)malloc(N * sizeof(int));
	
	free(c);
    return 0;
}
