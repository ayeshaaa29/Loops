

#include <iostream>
using namespace std;
#task1
void task1() {
    cout << "Count up:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    cout << "\nCount down:\n";
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}
#task2
void task2() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
#task3
void task3() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "Sum = " << sum << endl;
}
#task4
void task4() {
    int n, digits = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        digits = 1;
    } else {
        while (n > 0) {
            n = n / 10;
            digits++;
        }
    }

    cout << "Digits = " << digits << endl;
}
#task5
void task5() {
    int n;
    long long factorial = 1;
    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number." << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << n << "! = " << factorial << endl;
}
#task6
void task6() {
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;
    }
}
#task7
void task7() {
    int mark, sum = 0, count = 0;

    cout << "Enter marks (-1 to stop): ";
    cin >> mark;

    while (mark != -1) {
        sum = sum + mark;
        count++;
        cin >> mark;
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Average = " << average << endl;
    } else {
        cout << "No marks were entered." << endl;
    }
}
#task8
void task8() {
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << endl;
}

    return 0;
}
