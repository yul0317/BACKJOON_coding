#include <iostream>

using namespace std;

int main()
{
    int A, B, T;
    cin >> T;
    int resultArray[T];
    for (int i = 0; i < T; i++)
    {
        do
        {
            cin >> A >> B;
        } while (A <= 0 || B <= 0 || A >= 10 || B >= 10);
        resultArray[i] = A + B;
    }

    for (int i = 0; i < T; i++)
    {
        cout << "Case #" << i + 1 << ": " << resultArray[i] << "\n";
    }
    return 0;
}