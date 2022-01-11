/*
Пользователь вводит с клавиатуры число n, далее -- n целых чисел, которые нужно записать в вектор.

Потом пользователь вводит ещё одно значение. Нужно удалить из вектора все элементы, которые равны данному значению,
и вывести итоговое состояние вектора

Пример:
Пользователь ввёл 5, потом числа 1, 3, 3, 5, 1. И потом -- число 3. Необходимо, чтобы в векторе остались числа 1, 5, 1,
которые надо вывести их на экран
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    float sum = .0f;
    cout << "Enter the number of numbers: ";
    cin >> x;
    vector <int> num(x);
    cout << "Enter " << x << " numbers: ";

    for (int i = 0; i < x; i++) {
        cin >> num[i];
    }

    cout << "Which number to remove? ";
    int nRemove;
    cin >> nRemove;

    for (int i = 0; i < num.size(); ) {
        if (num[i] == nRemove && num[i] != num.size() - 1) {
            for (int j = i; j < num.size() - 1; j++) {
            num[j] = num[j + 1];
            }
            num.resize(num.size() - 1);
        }
        else if (num[i] == nRemove && i == num.size() - 1) {
            num.resize(num.size() - 1);
        }
        else i++;
    }
    
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << " ";
    }
}



