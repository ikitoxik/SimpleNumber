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
        cout << "����� ������ ���� ������ 1 � ������ 1000";
        return 0;
    }
    for (int i = 2; i <= sqrt(numb); i++) {
        if (numb % i == 0) {
            simple = false;
        }
    }
    if (!simple)
    cout << numb << " �� ������� �����";
    else
    cout << numb << " ������� �����";
    return 0;
}