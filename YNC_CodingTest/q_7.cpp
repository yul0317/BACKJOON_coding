#include <iostream>

using namespace std;

int main(){
    int money, count, cow_pay, sheep_pay, goat_count, goat_pay;
    int cow, sheep, goat;
    cin >> money >> count >> cow_pay >> sheep_pay >> goat_count >> goat_pay;
    // cout << money << count << cow_pay << sheep_pay << goat_count << goat_pay;


    // ��, ��ü�ݾ��� ���Ѹ����ݾ����� ���� ��(�ִ�� �Ҹ� �� �� �ִ� ���� M/A)
    for(cow = 1; cow <= money/cow_pay; cow++) {
        // ��, ���� �����ϰ� �ִ�� ���� �� �� �ִ� ���� M/B
        for(sheep = 1; sheep <= money/sheep_pay; sheep++) {
            // ������ ������ ��(i)�� ��(j)�� ������ �����������Ƿ� ���Ҵ� ��ü - ( i + j ) �� ����
            goat = count - (cow + sheep);
            // �̶�, ��,��,������ ������ ���������Ƿ� �ش� ������ ������ üũ�غ��� �˴ϴ�.
            if(cow + sheep + goat == count){
                if (cow_pay * cow + sheep_pay * sheep + goat_pay * (double)goat/goat_count == money ){
                        cout << cow << " " << sheep << " " << goat << endl;
                    }
                }
        }
    }
}