#include <iostream>
using namespace std;
 
#define MAX_OP_COUNT      4
 
/* [���� 1] �� ��ġ�� �ڵ� �߰� ���� - �� �߰��ؾ��ϴ� ���� �ƴմϴ�! */
   
  
   
class UserObject
{
private:
    // [���� 1] �Ʒ��� �ڵ忡�� mp_func_list ������ �Լ� ������ ������ �迭�� �����ؾ� ��!
    int (UserObject::*mp_func_list[3])(int, int);
 
public:
    int Add(int a, int b)
    {
        return a + b;
    }
 
    int Sub(int a, int b)
    {
        return a - b;
    }
 
    int Mul(int a, int b)
    {
        return a * b;
    }
 
    int Div(int a, int b)
    {
        return b ? a / b : 0;
    }
 
    UserObject()
    {
        mp_func_list[0] = &UserObject::Add;
        mp_func_list[1] = &UserObject::Sub;
        mp_func_list[2] = &UserObject::Mul;
        mp_func_list[3] = &UserObject::Div;
    }
 
    // [���� 2] �Ʒ��� �ڵ忡�� GetFuncList �Լ��� ��ȯ���� ����� ��! 
    int (*GetFuncList())(int,int)
    {
        return mp_func_list;
    }
};
   
int main()
{
    UserObject data;
    // [���� 3] �Ʒ��� �ڵ忡�� p ������ �ڷ����� �ڷ����� ����� �մϴ�.
                     p     = data.GetFuncList();   
    for (int i = 0; i < MAX_OP_COUNT; i++) {
        // [���� 4] �Ʒ��� �ڵ忡�� p ������ ����Ϸ��� �����ڿ� �ʿ� ������ ����� ��!
        cout << (             p   )(5, 4) << endl;
        p++;
    }
    cout << endl;
    return 0;
}