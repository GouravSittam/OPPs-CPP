#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }

        cout << "The sum of natural numbers from 1 to " << n << " is: " << sum << endl;
    }

    return 0;
}

