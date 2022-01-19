#include <iostream>
using namespace std;

int main()
{
    int gugu = 0;
    cin >> gugu;
    for (int dan = 1; dan <= 9; dan++)
    {
        cout << gugu << " * " << dan << " = " << gugu * dan << endl;
    }

    return 0;
}