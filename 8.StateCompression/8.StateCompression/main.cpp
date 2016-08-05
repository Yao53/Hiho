//
//  main.cpp
//  8.StateCompression
//
//  Created by Yao on 16/8/5.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>

using namespace std;

int N, M, Q;
int dp[2][1<<10];
int cnt[1<<10];

int getCount(int n){
	int num = 0;
	while(n){
		n = n & (n - 1);
		++num;
	}
	return num;
}

int main(int argc, const char * argv[]) {
	
	int flag = 0;
	cin >> N >> M >> Q;
	int len = 1 << M;
	int offset = (1 << (M - 1));
	for (int i = 0; i < len; ++i)
		cnt[i] = getCount(i);
	int input;
	for (int i = 0; i < N; ++i){
		cin >> input;
		for (int j = 0; j < len; j += 2){
			if (cnt[j] > Q){
				dp[flag][j] = dp[flag][j + 1] = 0;
			}
			else if (cnt[j] == Q){
				dp[flag][j] = max(dp[!flag][(j >> 1) + offset], dp[!flag][j >> 1]);
				dp[flag][j + 1] = 0;
			}
			else{
				dp[flag][j] = dp[flag][j + 1] = max(dp[!flag][(j >> 1) + offset], dp[!flag][j >> 1]);
				dp[flag][j + 1] += input;
			}
		}
		flag = !flag;
	}
	int res = 0;
	for (int i = 0; i < len; ++i)
		res = max(res, dp[!flag][i]);
	cout << res << endl;
	
	return 0;
}
