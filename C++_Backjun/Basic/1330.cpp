#include <iostream>

using namespace std;

int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (a < -10000 && a > 10000 && b < -10000 && b > 10000);
    //do while ������ true�� �ٽ� ���� �ö󰡼� do �� ����
    if (a > b)
    {
        cout << ">";
    }
    else if (a < b)
    {
        cout << "<";
    }
    else
    {
        cout << "==";
    }
    return 0;
}