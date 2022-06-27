#include <iostream>
#include <stdlib.h>
using namespace std;

class singleton {
private:
	static singleton* instance;
	singleton() {}
	~singleton() {}
public:
	static singleton* getInstance();
};
singleton* singleton::instance = new singleton;
singleton* singleton::getInstance() {
	return instance;
}
int main() {
	cout << "we get the instance" << endl;
	singleton* a1 = singleton::getInstance();
	singleton* a2 = singleton::getInstance();
	singleton* a3 = singleton::getInstance();
	cout << "we destroy the instance" << endl;
	system("pause");
	return 0;
}
