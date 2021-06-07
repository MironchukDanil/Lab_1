#pragma once
#include <iostream>
#include <string>
using namespace std;
/**
* \brief  ласс Payment
*/
class Payment
{
private:
    string name; //‘ио
    double salary; //оклад
    unsigned int year; //год поступлени¤ на работу
    unsigned int this_year;
    double allowance; //процент надбавки
    const double TAX = 0.13; //подоходный налог
    unsigned int days_worked; //кол-во отработанных дней
    unsigned int days_month; //кол-во рабочих дней
    double nach_summ; //начисленна¤ сумма
    double yder_summ; //удержанна¤ сумма
    unsigned int stag; //стаж (полное кол-во лет)
public:
    /**
    * \brief  онструктор с параметрами
    */
    explicit Payment(const string &name, double salary, unsigned int year, unsigned int this_year, double allowance, unsigned int days_worked, unsigned int days_month);

    /**
    * \brief  онструктор по умолчанию
    */
    explicit Payment() = default;

    /**
    * \brief ƒеструтор по умолчанию
    */
    ~Payment() = default;

    /**
    * \brief ћетод,вычисл¤ющий начисленную сумму
    * \return Ќачисленна¤ сумма
    */
    double AccruedAmount()const;

    /**
    * \brief ћетод,вычисл¤ющий удержанную сумму
    * \return ”держанна¤ сумма
    */
    double AmountWithheld()const;

    /**
    * \brief ћетод,вычисл¤ющий зарплату
    * \return «арплата
    */
    double Wages()const;

    /**
    * \brief ћетод,вычисл¤ющий стаж
    * \return —таж
    */
    int WorkExperience()const;

    /**
    * \brief ѕерегрузка оператора <<
    */
    friend ostream& operator << (ostream& out,const Payment& Unit);
};

