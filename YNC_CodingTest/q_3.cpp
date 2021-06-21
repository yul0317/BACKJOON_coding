#include <iostream>
using namespace std;
int main()
{
    int H, M;
    while (1)
    {
        cin >> H >> M;
        if (H >= 0 && H <= 23 && M >= 0 && M <= 59)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    if (M - 45 < 0)
    {
        if (H - 1 < 0)
        {
            H = 23;
        }
        else
        {
            H--;
        }
        M = M + 15;
    }
    else{
        M = M - 45;
    }
    cout << H << " " << M << endl;
}