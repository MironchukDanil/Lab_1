#pragma once
#include"Pair.h"
/**
* \brief Класс прямоугольник, наследованный от Pair
*/
class Rectangle : public Pair {
private:
	double side1, side2;
public:
	/**
	* \brief Конструктор по умолчанию
	*/
	explicit Rectangle() = default;

	/**
	* \brief Конструктор с параметрами
	*/
	explicit Rectangle(double side1, double side2);

	/**
	* \brief Деструктор по умолчанию
	*/
	~Rectangle();

	/**
	* \brief Метод вычисления периметра прямоугольника
	* \rerurn Периметр прямоугольника
	*/
	double Perimeter()const;

	/**
	* \brief Метод вычисления площади прямоугольника
	* \rerurn Площадь прямоугольника
	*/
	double Square()const;
};