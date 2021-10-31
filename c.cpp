#include <bits/stdc++.h>
using namespace std;
int fb[200];
int fibonaci(int n)
{
    int s = 0, t0 = 0, t1 = 1;
    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int fib(int n)
{
    if (n <= 1)
    {
        fb[n] = n;
        return n;
    }
    else
    {
        if (fb[n - 1] == -1)
        {
            fb[n - 1] = fib(n - 1);
        }
        if (fb[n - 2] == -1)
        {
            fb[n - 2] = fib(n - 2);
        }
        return fb[n - 1] + fb[n - 2];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 200; i++)
    {
        fb[i] = -1;
    }
    cout << fibonaci(6) << endl;
    cout << fibo(6) << endl;
    cout << fib(6) << endl;

    return 0;
}
