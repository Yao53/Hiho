//
//  main.cpp
//  7.01Knapsack
//
//  Created by Yao on 16/8/1.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
	int N, M;
	cin >> N >> M;
	int *c = (int*)malloc(N * sizeof(int));
	int *w = (int*)malloc(N * sizeof(int));
	
	int *dp = (int*)malloc(M * sizeof(int));
	memset(dp, 0, M * sizeof(int));
	
	for (int i = 0; i < N; ++i)
		cin >> w[i] >> c[i];
	for (int cap = 1; cap < M; ++i){
		for (int item = N - 1; item >= c[cap]; --item){
			
		}
	}
	cout << dp[0] << endl;
	free(c);
	free(w);
	free(dp);
    return 0;
}
