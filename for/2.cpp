#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int input;
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << sum(a, b) << endl;
    }

    return 0;
}