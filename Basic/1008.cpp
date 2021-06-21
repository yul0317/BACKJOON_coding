#include <iostream>

using namespace std;

int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (a < 0 && a > 10 && b < 0 && b > 10);
    cout << fixed;      //fixed를 하면 precision의 자리수가 소수점 이하 로 됨.
    cout.precision(15); //출력 자리수 지정(정수포함)
    cout << (double)a / b;
    cout.unsetf(ios::fixed); //소수점고정해제
    return 0;
}