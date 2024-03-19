#include <iostream>
using namespace std;

void fibonacciSeries(int n) {
    int first = 0, second = 1;

    cout << "Fibonacci Series up to " << n << " terms: ";
    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        fibonacciSeries(terms);
    }

    return 0;
}

