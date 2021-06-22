#include <iostream>

using namespace std;

int main()
{

    int num = 1;
    int count = 0;
    int n;
    cin >> n;
    while (true)
    {
        num++;
        for (int i = 1; i <= n; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == n)
            break;
        else
            count = 0;
    }
    cout << num;
    return 0;
}

// int n;
// cin >> n;
// int count = 0;
// int num =1;
// int value = n;
// while (count<n)
// {
//     if(value % num == 0){
//         num++;
//         count++;
//     }else{
//         num = 1;
//         count = 0;
//         value++;
//     }
// }
// cout << value;
// return 0;