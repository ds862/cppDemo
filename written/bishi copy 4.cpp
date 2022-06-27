#include<vector>
#include<algorithm> 
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    //freopen("1.in","r",stdin);
    int n = 5;
    //cin >> n;
    int l = 1;
    //cin >> l;
    int r = 3;
    //cin >> r;
    vector<int> nums= {n};
    
    for (int i = 0;i < nums.size(); i++) {
        while (nums[i] > 1) {
            int temp = nums[i];
            nums.resize(nums.size() + 2);
            for (int j = nums.size() - 1; j >= i;j--) {
                if (j == i || j == i + 2) {
                    nums[j] = temp / 2;
                } else if (j == i + 1) {
                    nums[j] = temp % 2;
                } else {
                    nums[j] = nums[j - 2];
                }
            }
        }
    }
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << ' ';
    }
    
    int res = 0;
    for(int i = l - 1; i < r; i++){
        if (nums[i] == 1) res++;
    }
   
    
    //cout << res << endl;
    return 0;
}