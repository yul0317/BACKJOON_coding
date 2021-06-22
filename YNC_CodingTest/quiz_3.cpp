#include <iostream>
#include <algorithm>
using namespace std;

struct Member
{
    char name;
    double time;
};
bool compare(const Member &p1, const Member &p2)
{
    if (p1.time < p2.time)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Member member[8];
    Member change_member[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> member[i].name >> member[i].time;
        change_member[i]=member[i];
    }

    sort(change_member, change_member + 8, compare);
    member[3]=change_member[0];
    member[4]=change_member[1];
    member[2]=change_member[2];
    member[5]=change_member[3];
    member[1]=change_member[4];
    member[6]=change_member[5];
    member[0]=change_member[6];
    member[7]=change_member[7];
    for (int i = 0; i < 8; i++)
    {
        cout << member[i].name << endl;
    }

    return 0;
}
