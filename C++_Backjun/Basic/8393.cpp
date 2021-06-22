#include <iostream>

using namespace std;

int main()
{
    int n, result = 0;
    do
    {
        cin >> n;
    } while (n < 1 || n > 10000);
    for (int i = 0; i < n; i++)
    {
        result += i + 1;
    }
    cout << result;
    return 0;
}