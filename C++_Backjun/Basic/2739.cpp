#include <iostream>

using namespace std;

int main()
{
    int n;

    do
    {
        cin >> n;
    } while (n < 1 || n > 9);

    for (int i = 1; i <= 9; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}