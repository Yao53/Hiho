//
//  main.cpp
//  7.CompletePackage
//
//  Created by Yao on 16/8/4.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void CompletePackage(int *dp, int c, int w, int M){
	for (int v = c; v <= M; ++v)
		dp[v] = max(dp[v], dp[v - c] + w);
}

int main(int argc, const char * argv[]) {
	int n, m;
	cin >> n >> m;
	int *c = (int*)malloc(n * sizeof(int));
	int *w = (int*)malloc(n * sizeof(int));
	int *dp = (int*)malloc(m * sizeof(int));
	memset(dp, 0, m * sizeof(int));
	for (int i = 0; i < n; ++i)
		cin >> c[i] >> w[i];
	for (int i = 0; i < n; ++i)
		CompletePackage(dp, c[i], w[i], m);
	cout << dp[m] << endl;
	free(c);
	free(w);
	free(dp);
    return 0;
}
