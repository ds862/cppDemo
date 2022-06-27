# include<iostream>
# include<vector>
# include<string>
# include<map>
using namespace std;

void quickSort(vector<int> &nums, int left, int right) {
    if (left > right)
       return;
    int i = left;
    int j = right;
    while (i < j) {
        while (i < j && nums[j] > nums[left])
            j--;
        while (i < j && nums[i] < nums[left])
            i++;
        swap(nums[i], nums[j]);
    }
    swap(nums[i], nums[left]);
    quickSort(nums, left, i - 1);
    quickSort(nums, i + 1, right);
}

int main() {
    string s1("Real Steel");
    cout << s1 << endl;
    //s1.erase(1, 3);  //删除子串(1, 3)，此后 s1 = "R Steel"
    cout << s1 << endl;
    //s1.erase(5);  //删除下标5及其后面的所有字符，此后 s1 = "R Ste"
    s1.erase(1, 3);
    cout << s1 << endl;
    vector<int> a = {1, 2, 3, 4, 5};
    a.erase();
    
    return 0;
}
