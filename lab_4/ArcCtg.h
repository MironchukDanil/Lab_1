#pragma once
#include"Function.h"
/**
* \brief  ласс функции арккотангенса
*/
class ArcCtg :public Function, public Derivative {
private:
	const int DIGRESSINPI = 180;
	double x;
public:
	/**
	* \brief  оструктор по умолчанию
	*/
	explicit ArcCtg() = default;

	/**
	* \brief  оструктор с параметром
	*/
	explicit ArcCtg(double x);

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