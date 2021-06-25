#include <iostream>
#include <algorithm>
using namespace std;

int *test(int *result, int length)
{
    int *array = new int[length + 1]();
    copy(result, result + length, array);
    // �迭 ����.
    // copy(������ �迭�� ��������, ������ �迭�� ������ ����, ����� �迭�� �����ϴ� ����);
    delete[] result;
    return array;
};

int main()
{
    int A, B;
    int length = 1;
    int *result = new int[length](); //��Ʈ�� ����Ʈ ���� �� �ʱ�ȭ

    while (true)
    {
        cin >> A >> B;
        if (cin.eof()==true)
        {
            break;
        }
        if (A < 0 || B < 0 || A >= 10 || B >= 10)
        {
            continue;
        }
        result[length - 1] = A + B;
        result = test(result, length);

        length++;
    }
    for (int i = 0; i < length - 1; i++)
    {
        cout << result[i] << endl;
    }
    delete[] result;
    return 0;
}
