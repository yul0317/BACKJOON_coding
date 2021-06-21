#include <iostream>

using namespace std;

int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (a < -10000 && a > 10000 && b < -10000 && b > 10000);
    //do while 조건이 true면 다시 위로 올라가서 do 문 실행
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