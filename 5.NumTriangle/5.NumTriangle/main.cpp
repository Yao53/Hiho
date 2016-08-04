//
//  main.cpp
//  5.NumTriangle
//
//  Created by Yao on 16/8/4.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
	int n;
	cin >> n;
	vector<int> num(n, 0);
	vector<int> dp(n, 0);
	for (int i = 1; i <= n; ++i){
		for (int j = 0; j < i; ++j){
			cin >> num[j];
		}
		for (int j = i - 1; j > 0; --j){
			dp[j] = max(dp[j] + num[j], dp[j - 1] + num[j]);
		}
		dp[0] = dp[0] + num[0];
	}
	int res = -1;
	for (int i = 0; i < n; ++i)
		if (dp[i] > res) res = dp[i];
	cout << res << endl;
	
    return 0;
}
