#include <iostream> //Программа выводит все целые числа от A до B включительно
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    // while
    int i = A;
    while (i <= B) cout << i++ << " ";
    
    cout << endl;
    
    // do while
    i = A;
    do { cout << i++ << " "; } while (i <= B);
    
    cout << endl;
    
    // for
    for (int i = A; i <= B; i++) cout << i << " ";
}