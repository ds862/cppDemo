#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int knapsack(int W, int N, vector<int>& wt, vector<int>& val) {
	//定义dp数组dp[N][W]，并且包含了初始化dp[0]=0;
    vector<int> dp(W + 1, 0);
	for (int i = 0; i < N; i++){
		for (int j = W; j >= 0; j--) {
			if (j - wt[i] < 0) {
				continue;
			} else {
				dp[j] = max(dp[j], dp[j - wt[i]] + val[i]);
			}
		}
	}
	return dp[W];
    
}

int main()
{
	int a[3] = {2, 1, 3};
	vector<int> wt(a, a + 3);
	int b[3] = {4, 2, 3};
	vector<int> val(b, b + 3);

	int res = knapsack(4, 3, wt, val);
	cout << res << endl;

	string s2("Hello");
	int length = s2.size();
	for(int i = length; i >= 0; i--){
            cout << s2[i] << endl;
			cout << 11111111111 << endl;
	}

	return 0;


}	