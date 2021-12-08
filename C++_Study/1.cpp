#include <iostream>
using namespace std;
 
#define MAX_OP_COUNT      4
 
/* [선택 1] 이 위치에 코드 추가 가능 - 꼭 추가해야하는 것은 아닙니다! */
   
  
   
class UserObject
{
private:
    // [문제 1] 아래의 코드에서 mp_func_list 변수를 함수 포인터 형식의 배열로 선언해야 함!
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
 
    // [문제 2] 아래의 코드에서 GetFuncList 함수의 반환값을 적어야 함! 
    int (*GetFuncList())(int,int)
    {
        return mp_func_list;
    }
};
   
int main()
{
    UserObject data;
    // [문제 3] 아래의 코드에서 p 변수의 자료형을 자료형을 적어야 합니다.
                     p     = data.GetFuncList();   
    for (int i = 0; i < MAX_OP_COUNT; i++) {
        // [문제 4] 아래의 코드에서 p 변수를 사용하려면 연산자와 필요 형식을 적어야 함!
        cout << (             p   )(5, 4) << endl;
        p++;
    }
    cout << endl;
    return 0;
}