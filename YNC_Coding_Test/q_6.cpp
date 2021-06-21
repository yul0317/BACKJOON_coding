#include <iostream>
using namespace std;

int main()
{
    int count;
    int one = 0, two = 1, result = -1;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        result = two - one;
        two = one;
        one = result;
    }
    cout << result << endl;

    return 0;
}
// 맞는데 틀리다고 나옴 씨발