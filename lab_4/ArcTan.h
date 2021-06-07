#pragma once
#include"Function.h"
using namespace std;
/**
* \brief  ласс функции арктангенста, наследоованый от Function
*/
class ArcTan : public Function, public Derivative {
private:
	const int DIGRESSINPI = 180;
	double x;
public:
	/**
	* \brief  оструктор по умолчанию
	*/
	explicit ArcTan() = default;

	/**
	* \brief  оструктор с параметром
	*/
	explicit ArcTan(double x);

	/**
	* \brief ћетод вычесл¤ющий значение функции
	* \return «начение функции
	*/
	double Meaning();

	/**
	* \brief ћетод вычисл¤ющий производную функции
	* \return ќбъекст класса Derivative
	*/
	Derivative ValueDerivative();
};
