#include <iostream>

using namespace std;
int fact(int n)
{
    int fact = 1, i;
    for (i = n; i > 0; i--)
        fact *= i;
    return fact;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}