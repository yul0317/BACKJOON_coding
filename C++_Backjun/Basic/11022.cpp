#include <iostream>

using namespace std;

int main()
{
    int A, B, T;
    cin >> T;
    int resultA[T];
    int resultB[T];
    for (int i = 0; i < T; i++)
    {
        do
        {
            cin >> A >> B;
        } while (A <= 0 || B <= 0 || A >= 10 || B >= 10);
        resultA[i] = A;
        resultB[i] = B;
    }

    for (int i = 0; i < T; i++)
    {
        cout << "Case #" << i + 1 << ": " << resultA[i] << " + " << resultB[i] << " = " << resultA[i] + resultB[i] << "\n";
    }
    return 0;
}