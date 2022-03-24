#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numb = 2;
    bool simple = true;

    cin >> numb;
    if (numb > 1000 || numb < 1)
    {
        cout << "Число должно быть больше 1 и меньше 1000";
        return 0;
    }
    for (int i = 2; i <= sqrt(numb); i++) {
        if (numb % i == 0) {
            simple = false;
        }
    }
    if (!simple)
    cout << numb << " не простое число";
    else
    cout << numb << " простое число";
    return 0;
}