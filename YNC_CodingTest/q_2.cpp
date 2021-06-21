#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int all_bbang = a + b;
    a = a - (all_bbang / 3);
    b = b - (all_bbang / 3);
    c = c / (a + b);
    a = a * c;
    b = b * c;

    cout << a << endl;
    cout << b << endl;
    
}