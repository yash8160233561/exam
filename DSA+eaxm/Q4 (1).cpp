
#include <iostream>
using namespace std;

int main()
{
    char a;
    char b;

    cout << "Enter a character: ";
    cin >> a;
    cout << "Enter b character: ";
    cin >> b;

    char i = a;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= b);
}