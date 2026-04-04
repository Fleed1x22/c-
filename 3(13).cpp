#include <iostream> //Программа выводит все целые числа от A до B включительно.
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    int i = A;
    while (i <= B) {
        cout << i << " ";
        i++;
    }
}