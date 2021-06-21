#include <iostream>

using namespace std;

int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (a < 0 && a > 10 && b < 0 && b > 10);
    //do while 조건이 true면 다시 위로 올라가서 do 문 실행
    cout << a - b;
    return 0;
}