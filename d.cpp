#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int ncr(int n, int r)
{
    int f0, f1, f2;
    f0 = fact(n);
    f1 = fact(r);
    f2 = fact(n - r);
    return f0 / (f1 * f2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << ncr(3, 2);

    return 0;
}
