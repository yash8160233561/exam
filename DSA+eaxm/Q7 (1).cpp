#include <iostream>
using namespace std;

main()
{
    int n;
    int a;
    int b;
    cout << "Enter any number: ";
    cin >> n;

    b = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    a = n;

    int sum = a + b;
    cout << "The sum is " << sum << endl;
}