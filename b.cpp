#include <bits/stdc++.h>
using namespace std;

double er(int x, int n)
{
    static double s = 1;
    if (n == 0)
    {
        return s;
    }
    else
    {
        s = s * x / n + 1;
        return er(x, n - 1);
    }
}
double ei(int x, int n)
{
    double s = 1, p = 1, f = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p * x;
        f = f * i;
        s = s + p / f;
    }
    return s;
}
double eii(int x, int n)
{
    double s = 1, p = 1, f = 1;
    for (int i = n; i > 0; i--)
    {

        s = s * x / i + 1;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << er(1, 10) << endl;
    cout << ei(1, 10) << endl;
    cout << eii(1, 10) << endl;

    return 0;
}
