#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, kb;
    cout << "Введіть розмір файлу в байтах: ";
    cin >> n;
    kb = n / 1024;
    cout << "Кількість повних кілобайтів: " << kb << endl;

    return 0;
}
