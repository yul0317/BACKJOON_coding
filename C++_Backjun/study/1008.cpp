#include <iostream>

using namespace std;

int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (a < 0 && a > 10 && b < 0 && b > 10);
    cout << fixed;      //fixed�� �ϸ� precision�� �ڸ����� �Ҽ��� ���� �� ��.
    cout.precision(15); //��� �ڸ��� ����(��������)
    cout << (double)a / b;
    cout.unsetf(ios::fixed); //�Ҽ�����������
    return 0;
}