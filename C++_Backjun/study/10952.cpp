#include <iostream>
#include <algorithm>
using namespace std;

int *test(int *result, int length)
{
    int *array = new int[length + 1]();
    copy(result, result + length, array);
    // 배열 복사.
    // copy(복사할 배열의 시작지점, 복사할 배열의 끝나는 지점, 복사될 배열의 시작하는 지점);
    delete[] result;
    return array;
};

int main()
{
    int A, B;
    int length = 1;
    int *result = new int[length](); //인트형 포인트 선언 및 초기화

    while (true)
    {
        cin >> A >> B;
        if (A < 0 || B < 0 || A >= 10 || B >= 10)
        {
            continue;
        }
        if (A == 0 && B == 0)
        {
            break;
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

// int* test(int *result, int length){
//     int *array = new int[length+1]();
//     copy(result,result+length,array);
//     cout << "함수에서 동작해보자잉sdf"<<endl;
//     cout << "삭제하기전 result 주소값 : " << result <<endl;
//     cout << "array 주소값 : " << array <<endl;
//     delete[] result;
//     for (int i = 0; i<length;i++){
//         cout << result[i]<<">>>>삭제하고난 후"<<endl;
//     }

//     return array;
// };

// int main(){
//     int A,B;
//     int length = 1;
//     int *result = new int[length](); //인트형 포인트 선언 및 초기화

//     result[0]=1;

//     cout << result <<endl;

//     cout << result[0] << endl;
//     cout << "함수 들어간다잉"<<endl;
//     result = test(result,length);
//     for (int i = 0; i<length+1;i++){
//         cout << result[i]<<">>>>???"<<endl;
//     }
//     cout << "새로만든 result 주소값 : " <<result<<endl;