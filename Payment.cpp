#include <iostream>
#include <string>
#include "Payment.h"

Payment::Payment(const string &name, double salary, unsigned int year, unsigned int this_year, double allowance, unsigned int days_worked,unsigned int days_month)
{
    this->name = name;
    this->salary = salary;
    this->year = year;
    this->this_year = this_year;
    this->allowance = allowance;
    this->days_worked = days_worked;
    this->days_month = days_month;
}
double Payment::AccruedAmount()const
{
    if (days_worked > days_month)
        return salary + salary * allowance / 100;
    else if (days_worked < days_month)
        return salary / days_month * days_worked;
    else
        return salary;
}

double Payment::AmountWithheld()const
{
    return AccruedAmount() * TAX + AccruedAmount()*0.01;
}

double Payment::Wages()const
{
    return AccruedAmount() - AmountWithheld();
}

int Payment::WorkExperience()const
{
    return this_year - year;
}