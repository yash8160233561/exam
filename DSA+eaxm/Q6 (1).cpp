#include <iostream>
using namespace std;

main()
{
    int n, digit = 0;
    cout << "Enter any number: ";
    cin >> n;

    if (n == 0)
        digit = 1; 
   
    else
    {
        while (n != 0)
        {
            n = n / 10; 
            digit++;
        }
    }
    cout << "Total : " << digit << endl;
}