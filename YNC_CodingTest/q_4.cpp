#include <iostream>

using namespace std;

int main()
{
    int tw_four, tw_five, total_pay;
    float discount_pay = 1.0;
    cin >> tw_four >> tw_five;
    if (tw_four + tw_five >= 20)
    {
        discount_pay = 0.9;
    }
    total_pay = int(((tw_four * 15000) + (tw_five * 20000)) * discount_pay);
    cout << total_pay;
}