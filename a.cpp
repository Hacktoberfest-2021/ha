#include <bits/stdc++.h>
using namespace std;
double taylor(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = taylor(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << taylor(5, 3);

    return 0;
}
