#include <iostream>

using namespace std;

int main()
{
    int num, bus_ckdl;
    int bus_1, bus_2;
    cin >> num;
    cin >> bus_ckdl;
    bus_2 = (num - bus_ckdl) / 2;
    bus_1 = (num + bus_ckdl) / 2;
    cout << bus_1 << endl;
    cout << bus_2;

    return 0;
}