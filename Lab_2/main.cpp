#include"Rectangle.h"
#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	Pair Pair(0, 0);
	Pair.setFirst(3); Pair.setSecond(2);
	cout << "Произведение чисел равно: " << Pair.Composition() << endl;
	try
	{
		Rectangle Rectangle(2, 4);
		cout << "Периметр прямоугольника: " <<Rectangle.Perimeter()<< endl;
		cout << "Площадь прямоугольника: " << Rectangle.Square()<<endl;
	}
	catch (double)
	{
		cout << "Стороны прямоугольника введены неверно" << endl;
	}
}