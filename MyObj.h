#include <iostream>

using namespace std;


class MyObj {

	friend ostream& operator<<(ostream& os, const MyObj& s);
	friend istream& operator>>(istream& os, MyObj& s);

public:

	MyObj();
	MyObj(int, int, int);
	MyObj(const MyObj& s);

	MyObj& operator=(const MyObj& s);
	bool operator<(const MyObj& s);
	bool operator>(const MyObj& s);

	static void reset() {compareCount = 0;};
	static int getCount() {return compareCount;};

	static int compareCount;

private:

	int a[3];

};
