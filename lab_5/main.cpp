#include "Distance.h"
int main() {
	setlocale(LC_ALL, "Russian");
	double x = 2, y = -2, a = 0, b = 0, c = 5;
	try {
		cout << Distance1(x, y, a, b, c) << endl;
	}
	catch (...) {
		cout << "„исла a, b не могут быть одновременно равны нулю, без спецификатора" << endl;
	}

	try {
		cout << Distance2(x, y, a, b, c) << endl;
	}
	catch (int) {
		cout << "„исла a, b не могут быть одновременно равны нулю, спецификатор throw" << endl;
	}

	try {
		cout << Distance3(x, y, a, b, c) << endl;
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl;
	}

	try {
		cout << Distance4(x, y, a, b, c) << endl;
	}
	catch (MyException) {
		cerr << "„исла a, b не могут быть одновременно равны нулю, пустой класс" << endl;
	}

	try {
		cout << Distance5(x, y, a, b, c) << endl;
	}
	catch (MyException2 error) {
		cerr << error.message << endl;
	}

	try {
		cout << Distance6(x, y, a, b, c) << endl;
	}
	catch (MyException3 error) {
		cerr << error.what() << endl;
	}
}