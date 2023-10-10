#include <iostream>
int num;
int f1 = 0, f2 = 1, f3 = 1;
int a = 1;

int main() {

    setlocale(LC_ALL, "Russian");

    std::cout << "Введите номер числа: ";
    std::cin >> num;
    do {
        a++;
        std::cout << f1 << "  ";
        f2 = f3;
        f3 = f1;
        f1 = f2 + f3;
    } while (a <= num);
}
