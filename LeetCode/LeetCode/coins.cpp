#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int min(int num1,int num2)
{
	int num;
	return num > num2 ? num2 : num1;
}

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1);
	dp[0] = 0;
	for (int i = 1; i < dp.size(); i++) {
		for (auto coin : coins) {
			if (i - coin < 0) continue;
			dp[i] = min(dp[i], 1 + dp[i - coin]);
		}
	}
	return dp[amount];
}

int main()
{
	int a[3] = {1, 2, 5};
	vector<int> acoins(a, a + 3);
	int res = coinChange(acoins, 11);
	cout << res << endl;
	
	return 0;


}	