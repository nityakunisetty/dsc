#include <iostream>
using namespace std;
int main() {
    int sum = 0;
	int n=4;
	int a[n];
    cout<<"enter elements of array: ";
    for (int i=0;i<n;i++)
    cin>>a[i];
    for(int i = 0; i < n; i=i+2) {
        sum=sum+a[i];
    }
    cout << "Sum is: " << sum;
    return 0;
}

