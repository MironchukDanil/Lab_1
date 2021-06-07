#pragma once
#define _USE_MATH_DEFINES
#include<cmath>
using namespace std;
/**
* \brief Класс производная
*/
class  Derivative {
protected:
	double value;
public:

	/**
	* \brief Конструктор по умолчанию
	*/
	explicit Derivative() = default;
	/**
	* \brief Конструктор с параметром
	*/
	explicit Derivative(double value);

	/**
	* \brief Метод отдающий полученную производную функции
	* \return Производная функции
	*/
	double Print()const;
};
