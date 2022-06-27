#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int T = 2;
    
    for(int i = 0; i < T; i++){
        int n = 3;
        int m = 10;
        int res = -1;
        
        int num = 0;
        for (int i = 1; i <= n; i++) {
            num *= 10;
            num += 9;
        }
        cout << "num:" << num << endl;
        int start = 1;
        for (int i = 1; i < n; i++) {
            start *= 10;
        }
        cout << "start:" << start << endl;
        for (int i = start; i <= num; i++) {
            if (i % m == 0) {
                res = i;
                break;
            }
        }
        cout << res << endl;
        
     }

    return 0;
}