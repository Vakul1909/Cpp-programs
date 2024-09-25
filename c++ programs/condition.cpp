#include <iostream>
using namespace std;
int main()
{
    int saving;
    cin >> saving;
    if (saving < 100)
    {
        cout << "kam h savings yrr";
    }
    else if (saving > 100 && saving < 500)
    {
        cout << "shi saving h wese";
    }
    else
    {
        cout << "party tym";
    }
    return 0;
}