#include <iostream> // эта программа считает количество дней вводимых пользователем
using namespace std;

int main() {
    int dayNumber, daysInMonth;
    
    cout << "Введите номер дня: ";
    cin >> dayNumber;
    cout << "Введите дней в месяце: ";
    cin >> daysInMonth;
    
    cout << "Осталось: " << daysInMonth - dayNumber << " дней" << endl;
    
    return 0;
}