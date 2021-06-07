#pragma once
#include"Derivative.h"
/**
	* \brief Класс функция
	*/
class Function {
public:
	/**
	* \brief Виртуальный метод вычисления значения функции
	*/
	virtual double Meaning() = 0;

	/**
	* \brief Виртуальный метод вычесления производной функции
	*/
	virtual Derivative ValueDerivative() = 0;
};
