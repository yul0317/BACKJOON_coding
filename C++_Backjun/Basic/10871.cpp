#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int N, X;
    string str;
    string temp_str;
    int i = 0;
    do
    {
        cin >> N >> X;
    } while (N < 1 || X < 1 || N > 10000 || X > 10000);
    int result[N];
    //어이가 없네.. 공백으로 쳐받네 시발 ㅡㅡ
    //cin을 연속적으로 호출하면 입력받은 한 줄에서 공백을 구분자로 하여 다음 것을 계속해서 가져올 수 있다.
    // 맨밑에꺼 참고
    // for (int i=0; i< N; i++){
    //     cin >> result[i];
    // }
    cin.ignore(); //버퍼값 지우기

    getline(cin, str);
    istringstream ss(str);

    // while(getline(ss,temp_str,' ')){
    //     result[i]=stoi(temp_str);
    //     i++;
    // }
    while (ss >> temp_str)
    {
        istringstream ssInt(temp_str);
        ssInt >> result[i];
        i++;
    }

    for (int i = 0; i < N; i++)
    {
        if (result[i] < X)
        {
            cout << result[i] << " ";
        }
    }
    return 0;
}

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     char s1[15];
//     char s2[15];
    
//     scanf("%s %s", s1, s2);
//     cout << s1 << endl;
//     cout << s2 << endl;
    
//     cin >> s1;
//     cin >> s2;
//     cout << s1 << endl;
//     cout << s2 << endl;    
// }