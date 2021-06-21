#include <iostream>

using namespace std;

int main()
{
    int day;
    int gift = 0;

    cin >> day;
    for (int i = 1; i <= day; i++)
    {
        int temp_gift = 0;
        for (int j = 1; j <= i; j++)
        {
            temp_gift += j;
        }
        gift += temp_gift;
    }
    cout << gift;
}