#include <iostream>

using namespace std;

int main()
{
    int N;
    do
    {
        cin >> N;
    } while (N > 100000);

    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << "\n";
    }
    return 0;
}