#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
private:
    vector<int> nums;
    string s;
public:
    vector<int> printNumbers(int n) {
        s.resize(n, '0');
        dfs(0, n);
        return nums;
    }
    // 枚举所有情况
    void dfs(int index, int end) {
        if (index == end) {
            save(); return;
        }
        for (int i = 0; i <= 9; ++i) {
            s[index] = i + '0';
            dfs(end, index + 1);
        }
    }
    // 去除首部0
    void save() {
        int ptr = 0;
        while (ptr < s.size() && s[ptr] == '0') ptr++;
        if (ptr != s.size())
            nums.emplace_back(stoi(s.substr(ptr)));
    }
};

int main()
{
	Solution so;
	vector<int> res = so.printNumbers(1);
	for(auto iter = res.begin(); iter != res.end(); ++iter) {
        std::cout << *iter << " ";
    }
	cout << endl;
    char char1;
    char1 = '0' + 2;
    cout << char1 << endl;
    return 0;
}	