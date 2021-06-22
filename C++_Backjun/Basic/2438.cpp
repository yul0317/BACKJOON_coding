#include <iostream>

using namespace std;

int main()
{
    int N;
    do
    {
        cin >> N;
    } while (N < 1 || N > 100);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}