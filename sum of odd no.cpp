#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            sum = sum + a[i];
        }
    }

    cout << "Sum is: " << sum;

    return 0;
}

