#include"Pair.h"
Pair::Pair(double first, double second) :first{ first }, second{ second }{}
Pair::~Pair() = default;
void Pair::setFirst(double first) { this->first = first; }
void Pair::setSecond(double second) { this->second = second; }

double Pair::Composition()const {
	return first * second;
}