#include <iostream>
using namespace std;

main()
{
    int i;
    cout << "Enter any number: ";
    cin >> i;

    int rev = 0;
    while (i > 0 || rev > 9)
    {
        if (i == 0)
        {
            i = rev;
            rev = 0;
        }
        rev += i % 10;
        i /= 10;
    }

    cout << "total: " << rev << endl;
}