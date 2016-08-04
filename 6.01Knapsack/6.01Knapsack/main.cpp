//
//  main.cpp
//  7.01Knapsack
//
//  Created by Yao on 16/8/1.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>

using namespace std;
void ZeroOnePack(int *dp, int c, int w, int M){
	for (int v = M; v >= c; --v)
		dp[v] = max(dp[v], dp[v - c] + w);
}

int main(int argc, const char * argv[]) {
	int N, M;
	cin >> N >> M;
	int *c = (int*)malloc(N * sizeof(int));
	int *w = (int*)malloc(N * sizeof(int));
	
	int *dp = (int*)malloc((M + 1) * sizeof(int));
	memset(dp, 0, (M + 1) * sizeof(int));
	
	for (int i = 0; i < N; ++i)
		cin >> c[i] >> w[i];
	for (int i = 0; i < N; ++i){
		ZeroOnePack(dp, c[i], w[i], M);
	}
	cout << dp[M] << endl;
	free(c);
	free(w);
	free(dp);
    return 0;
}
