#include <iostream>

using namespace std;

int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (a < 0 && a > 10 && b < 0 && b > 10);
    cout << a * b;
    return 0;
}