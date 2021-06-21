#include <iostream>

using namespace std;

int main(){
    int money, count, cow_pay, sheep_pay, goat_count, goat_pay;
    int cow, sheep, goat;
    cin >> money >> count >> cow_pay >> sheep_pay >> goat_count >> goat_pay;
    // cout << money << count << cow_pay << sheep_pay << goat_count << goat_pay;


    // 소, 전체금액을 소한마리금액으로 나눈 몫(최대로 소를 살 수 있는 것이 M/A)
    for(cow = 1; cow <= money/cow_pay; cow++) {
        // 양, 위와 동일하게 최대로 양을 살 수 있는 것이 M/B
        for(sheep = 1; sheep <= money/sheep_pay; sheep++) {
            // 염소의 갯수는 소(i)와 양(j)의 갯수가 정해져있으므로 염소는 전체 - ( i + j ) 만 가능
            goat = count - (cow + sheep);
            // 이때, 소,양,염소의 갯수가 정해졌으므로 해당 갯수로 마리를 체크해보면 됩니다.
            if(cow + sheep + goat == count){
                if (cow_pay * cow + sheep_pay * sheep + goat_pay * (double)goat/goat_count == money ){
                        cout << cow << " " << sheep << " " << goat << endl;
                    }
                }
        }
    }
}