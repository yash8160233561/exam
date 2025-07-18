#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int a = 1, b = 1, i = 0;

    while (i < n)
    {
        cout << a << endl;
        a = b + a;
        b++;
        i++;
    }

    cout << endl;
}