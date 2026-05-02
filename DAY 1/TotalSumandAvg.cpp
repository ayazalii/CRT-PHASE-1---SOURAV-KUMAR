#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    int sum;
    double average;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    // Calculate sum
    sum = a + b + c;

    // Calculate average (explicit type casting to avoid integer division)
    average = (double)sum / 3;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}