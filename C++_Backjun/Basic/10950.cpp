#include <iostream>

using namespace std;

int main()
{
    int T, A, B;
    cin >> T;
    int sum_Array[T];
    for (int i = 0; i < T; i++)
    {
        do
        {
            cin >> A >> B;
        } while (A < 0 || B < 0 || A > 10 || B > 10);
        sum_Array[i] = A + B;
    }
    for (int i = 0; i < T; i++)
    {
        cout << sum_Array[i] << endl;
    }
    return 0;
}