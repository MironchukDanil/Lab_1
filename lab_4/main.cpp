#include<iostream>
#include"ArcTan.h"
#include"ArcCtg.h"
int main() {
	setlocale(LC_ALL, "Russian");
	ArcTan Tg(1);
	cout << "Арктангенс равен: " << Tg.Meaning() << " Производная равна: " << Tg.ValueDerivative().Print() << endl;
	ArcCtg Ctg(1);
	cout << "Арккотангенс равен: " << Ctg.Meaning() << " Производная равна: " << Ctg.ValueDerivative().Print() << endl;
};