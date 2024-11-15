#include <iostream>
#include <queue>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    queue<int> myQueue;
    int n, element;

    cout << "������ ������� �������� � ����: ";
    cin >> n;

    cout << "������ " << n << " ����� �����:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        myQueue.push(element);
    }

    int sum = 0;

    while (!myQueue.empty()) {
        int current = myQueue.front();
        if (current > 0) {
            sum += current;
        }
        myQueue.pop();
    }

    cout << "���� �������� �������� �����: " << sum << endl;

    return 0;
}
