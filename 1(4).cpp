#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int b[SIZE];// статистический одномерный массив
    
    //ввод эллементов массива
    cout << "Введите 10 целых чисел:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "b[" << i << "] = ";
        cin >> b[i];
    }
    
    //вывод элементов массива
    cout << "\nВведенный массив:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "b[" << i << "] = " << b[i] << "\n";
    }
    
    return 0;
}
