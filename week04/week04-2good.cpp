///week04-2good.cpp 這程式是對的, 用進階C++迴圈
///但在CodeBlocks出錯, warning : rang-based for only available with...
///2011年之後, 只有在-std=c++11 或 -std=gnu++11 才能用
///所以, 需要改一下設定:Setting-Compiler
///選第2個「使用C++11 Ios 國際標準的C++」,也就是-std=c++11
///下面是week01的小考題目 SOIT106_ADVACNE_012
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	for (int i=0; i<20; i++){
		cin >> now;
		if (now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans=0;
	for (int num:a){ ///在CodeBlock設定出錯時, 永遠跑不出答案
        if (num==now) ans++;
	}
    cout << ans << "\n";
}
