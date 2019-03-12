#include <iostream>

using namespace std;

int main()
{
       cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
cout << "A + B = " << a + b << '\n';
cout << "A - B = " << a - b << '\n';
cout << "A * B = " << a * b << '\n';
cout << "A / B = " << a / b << '\n';
int min;
min = a;
if (min > b) {
    b = min;
}
cout << "min(A,B) = " << min;
    return 0;
}
