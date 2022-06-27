#include<vector>
#include<algorithm> 
#include <iostream>
#include <cstdio>

using namespace std;
int com_count(int a) {
    int ans = 0;
    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            ans++;
            if (i != a / i) {
                ans++;
            }
        }
    }
    //cout << ans << endl;
    return ans;
}
int main(){
    //freopen("1.in","r",stdin);
    int n = 3;
    //cin >> n;
    vector<int> A = {5, 8, 9};
    vector<int> B = {4, 12, 6};
    
    int ans = 0;
    vector<int> A_new;
    vector<int> B_new;
    for(int i = 0; i < n; i++){
        A_new[i] = com_count(A[i]);
    }
    for(int i = 0; i < n; i++){
        B_new[i] = com_count(B[i]);
    }
    sort(A_new.begin(),A_new.end());
    sort(B_new.begin(),B_new.end());
    int index = 0;
    for (int i = 0; i < A_new.size(); i++) {
        if(index < B_new.size() && B_new[index] <= A_new[i]){
            index++;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}