//
//  main.cpp
//  1.Manacher
//
//  Created by Yao on 16/8/1.
//  Copyright © 2016年 San. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
	int N;
	string inputS;
	string s;
	cin >> N;
	while(N--){
		cin >> inputS;
		s = "$#";
		for(int i = 0; i < inputS.size(); ++i){
			s += inputS[i];
			s += "#";
		}
		s += "%";
		cout<< s<<endl;
		int maxLen = 0;
		int maxRegion = 0;
		int maxCenter = 1;
		vector<int> region(s.size());
		for (int i = 2; i <= s.size() - 2; ++i){
			if (maxCenter + region[maxCenter] > i){
				region[i] = min(maxCenter + region[maxCenter] - i, region[2 * maxCenter - i]);
			}
			else {
				region[i] = 1;
			}
			while(s[i - region[i]] == s[i + region[i]])
				++region[i];
			if (i + region[i] > maxCenter + region[maxCenter]){
				maxCenter = i;
			}
			if (region[maxCenter] > maxLen)
				maxLen = region[maxCenter];
		}
		cout << maxLen - 1 << endl;
	}
	return 0;
}