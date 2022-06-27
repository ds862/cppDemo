//2_2.cpp
#include <iostream>
using namespace std;

int main() {
	int year = 1;
	int lo = 0, hi = 1;
	int e = 3;
	int _elem[3] = {1, 2, 3};
	for(; (lo < hi--) && (e != _elem[hi]); ) 
		cout << hi << " for" << endl;
	cout << hi << " all" << endl;

	return 0;
}
