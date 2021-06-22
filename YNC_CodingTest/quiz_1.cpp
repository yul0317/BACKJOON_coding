#include <iostream>

using namespace std;

int main()
{
    int age_1, age_2, age_3;
    int result_age;
    cin >> age_1;
    cin >> age_2;
    cin >> age_3;
    age_1 = age_1 * 70;
    age_2 = age_2 * 21;
    age_3 = age_3 * 15;
    result_age = (age_1 + age_2 + age_3) % 105;
    cout << result_age;
    return 0;
}