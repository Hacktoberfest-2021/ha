#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char name[] = "deep";
    int i, j;
    int arrsize = sizeof(name) / sizeof(name[0]);
    char name1[arrsize];
    for (i = 0; name[i] != '\0'; i++)
    {
    }

    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        name1[j] = name[i];
    }
    name1[j] = '\0';

    cout << name1;

    return 0;
}
