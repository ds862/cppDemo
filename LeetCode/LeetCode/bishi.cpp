 #include<iostream>
#include<vector>
using namespace std;
int main() {
    int n = 3;
    int k = 5;
    
        vector<int> nums = {3, 6, 9};
        vector<int> result;
        vector<int> vec(n, 1);
        for (int i = 0; i < k; i++) {
            int index;
            int minVal = 1000000;
            for (int i = 0; i < n; i++) {
                if (nums[i] < minVal) {
                    minVal = nums[i];
                    index = i;
                }
            }
            int res = index + 1;
            cout << res << endl;
            cout << "----------" << endl;
            vec[index] += 1;
            nums[index] = nums[index] * vec[index];
            for (int i = 0; i < n; i++) {
                cout << nums[i] << " ";
            }
            cout << endl;
            cout << "##########" << endl;
        }
        
    
    return 0;
}
 
 /*
 ListNode* cur = S;
        ListNode* head = S;
        ListNode* newHead = nullptr;
        for (i = 0; i < n - 1; i++) {
            if (i == 0) {
                for (i = 0; i < n - 2; i++) {
                cur = cur->next;
                }
                ListNode *newHead = cur->next;
                cur->next = nullptr;
                newHead->next = head;
            }
            
        }


for(int i = 0; i < n; i++) {
            for(int i = 0; i < vec.size(); i++) {
                ListNode *temp = vec[i];
                temp
        }
        }

        */