#include "Payment.h"
ostream& operator << (ostream& out, const Payment& Unit) {
    out <<Unit.name <<":\nСтаж: " << Unit.WorkExperience() << "\nНачисленная сумма: " << Unit.AccruedAmount() 
        << "\nУдержанная сумма: " << Unit.AmountWithheld() << "\nЗарплата: " << Unit.Wages();
    return out;
}
int main()
{
    setlocale(LC_CTYPE, ".1251");
    Payment Unit("Макаров Макар Фёдорович",40000,2010,2021,5,21,22);
    cout << Unit;
}