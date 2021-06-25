#include <iostream>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    // ios_base::sync_with_stdio(false)는 C와 C++의 버퍼를 분리합니다. 
    // 이것을 사용하면 cin/cout이 더 이상 stdin/stdout과 맞춰 줄 필요가 없으므로 속도가 빨라집니다.
    // 단, 버퍼가 분리되었으므로 cin과 scanf, gets, getchar 등을 같이 사용하면 안 되고, 
    // cout과 printf, puts, putchar 등을 같이 사용하면 안 됩니다.
    cin.tie(NULL);
    cout.tie(NULL);
    // cin.tie(NULL)은 cin과 cout의 묶음을 풀어 줍니다.
    // 기본적으로 cin으로 읽을 때 먼저 출력 버퍼를 비우는데,
    // 마찬가지로 온라인 저지에서는 화면에 바로 보여지는 것이 중요하지 않습니다.
    // 입력과 출력을 여러 번 번갈아서 반복해야 하는 경우 필수적입니다.
    int T, A, B;
    do
    {
        cin >> T;
    } while (T < 0 || T > 1000000);

    int sum_Array[T];
    for (int i = 0; i < T; i++)
    {
        do
        {
            cin >> A >> B;
        } while (A < 0 || B < 0 || A > 1000 || B > 1000);
        sum_Array[i] = A + B;
    }
    for (int i = 0; i < T; i++)
    {
        cout << sum_Array[i] << "\n";
        // endl은 개행문자를 출력할 뿐만 아니라 출력 버퍼를 비우는 역할까지 합니다. 
        // 그래서 출력한 뒤 화면에 바로 보이게 할 수 있는데, 그 버퍼를 비우는 작업이 매우 느립니다.
        // 게다가 온라인 저지에서는 화면에 바로 보여지는 것은 중요하지 않고 무엇이 출력되는가가 중요하기 때문에
        // 버퍼를 그렇게 자주 비울 필요가 없습니다. 그래서 endl을 '\n'으로 바꾸는 것만으로도 굉장한 시간 향상이 나타납니다.
    }
    return 0;
}


// ios_base :: sync_with_stdio(false); 
// cin.tie(NULL); 
// cout.tie(NULL);

// endl 보다 "\n" 사용하는 것이 더 빠르다.
// 하지만 이는 일종의 편법이므로, 다음과 같은 주의사항이 있다.
// 1. scanf, printf와 함께 사용하면 안된다.
// 2. 싱글 쓰레드 환경에서만 사용 가능하다. (알고리즘 문제풀이시에 사용, 실무에서는 사용 X)