
// 给定三个数组，每个数组去除一个值，求组合出64的个数

# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;

int sum64(vector<int> num1, vector<int> num2, vector<int> num3, int target) {
    unordered_map<int, int> map1;
    unordered_map<int, int> map2;
    unordered_map<int, int> map3;
    int res;
    for (int num : num1) {
        if (num <= target) {
            map1[num]++;
            cout << map1[num] << endl;
        }
    }
    for (int num : num2) {
        if (num <= target) {
            map2[num]++;
            cout << map2[num] << endl;
        }
    }
    for (int num : num3) {
        if (num <= target) {
            map3[num]++;
            cout << map3[num] << endl;
        }
    }
    for (auto kv1 : map1) {
        for (auto kv2 : map2) {
            for (auto kv3 : map3){
                if ((kv1.first + kv2.first + kv3.first) == target)
                    res += kv1.second * kv2.second * kv3.second;
            }
        }
    }
    return res;
}

int main() {
    vector<int> num1 = {1, 1, 1};
    vector<int> num2 = {1, 1, 1};
    vector<int> num3 = {62, 62, 62};
    int target = 64;
    int res = sum64(num1, num2, num3, target);
    cout << res << endl;
    return 0;
}
