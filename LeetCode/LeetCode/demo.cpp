#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> myhash;
		vector<int> out;
		for (int i = 0; i < nums.size(); i++) {
			myhash[nums[i]] = i;
		}
		for (int i = 0; i < nums.size(); i++) {
			if (myhash[target - nums[i]] && (myhash[target - nums[i]] != i)) {
				out.push_back(i);
				out.push_back(myhash[target - nums[i]]);
				return out;
			}
		}
		return out;
	}
};

int main()
{
	Solution so;
	int arr[4] = {2,3,1,2};
	vector<int> arr_(arr, arr + 4);
	
	vector<int> res = so.twoSum(arr_, 5);
	for(auto iter = res.begin(); iter != res.end(); ++iter) {
        std::cout << *iter << " ";
    }
	cout << endl;
	
	return 0;


}	
