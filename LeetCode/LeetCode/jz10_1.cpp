#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	public:
    int fib(int n) {
		vector<int> memo(n + 1, 0);
		return helper(memo, n);
    }

	int helper(vector<int> &memo, int n){
		if (n = 1) return 0; //base case
		if (n = 2) return 1;
		if (memo[n] != 0) return memo[n];
		memo[n] = helper(memo, n - 1) + helper(memo, n - 2);
		return memo[n];
	}
};

int main()
{
	Solution so;
	int res = so.fib(3);
	cout << res << endl;

	cout << endl;
	return 0;


}	
