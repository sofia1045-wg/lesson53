#include <iostream>
#include <string>
#define DEFAULT_SIZE 100000

using namespace std;

void test01() {
	for (int i = 0; i < 1000000; i++);
}

void test02() {
	for (int i = 0; i < 10000000; i++);
}

int main() {
	long long start = time(NULL);
	test01();
	long long finish = time(NULL);
	cout << "Test 01 running with: " << finish - start << " seconds.\n";

	start = time(NULL);
	test02();
	finish = time(NULL);
	cout << "Test 02 running with: " << finish - start << " seconds.\n";

	return 0;
}