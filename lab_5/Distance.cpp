#include "Distance.h"
double Distance1(double x, double y, double a, double b, double c) {
	if (a == 0 && b == 0)
		throw 1;
	else
		return abs(a * x + b * y + c) / sqrt(pow(a, 2) + pow(b, 2));
}
double Distance2(double x, double y, double a, double b, double c) {
	if (a == 0 && b == 0)
		throw 1;
	else
		return abs(a * x + b * y + c) / sqrt(pow(a, 2) + pow(b, 2));
}
double Distance3(double x, double y, double a, double b, double c) {
	if (a == 0 && b == 0)
		throw invalid_argument{ "„исла a, b не могут быть одновременно равны нулю, стандартное исключение" };
	else
		return abs(a * x + b * y + c) / sqrt(pow(a, 2) + pow(b, 2));
}
double Distance4(double x, double y, double a, double b, double c) {
	if (a == 0 && b == 0)
		throw MyException();
	else
		return abs(a * x + b * y + c) / sqrt(pow(a, 2) + pow(b, 2));
}
double Distance5(double x, double y, double a, double b, double c) {
	if (a == 0 && b == 0)
		throw MyException2("„исла a, b не могут быть одновременно равны нулю, независимый класс с пол¤ми-параметрами функции");
	else
		return abs(a * x + b * y + c) / sqrt(pow(a, 2) + pow(b, 2));
}
double Distance6(double x, double y, double a, double b, double c) {
	if (a == 0 && b == 0)
		throw MyException3("„исла a, b не могут быть одновременно равны нулю, класс наследник");
	else
		return abs(a * x + b * y + c) / sqrt(pow(a, 2) + pow(b, 2));
}
