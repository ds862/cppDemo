#include<iostream> //包含输入输出头文件
#include<cmath>
using namespace std; //指定名字空间

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

int main() { //主函数
    int n = 5;
	int a[n] = {1, 5, 6, 6, 3};
    
    bubbleSort(a, 5);
    for (int i = 0; i < n; i++) 
	{ //使用循环，输出N个元素
		cout << a[i] << " "; //输出a[i], 后加空格，不换行
	}
	cout << endl; //所有元素输出完之后才换行
	return 0; //函数返回
}
