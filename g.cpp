#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char name[] = "Deep";
    char name1[] = "Arindam";

    int i, j;
    for (i = 0, j = 0; name[i] != '\0' && name1[i] != '\0'; i++, j++)
    {
        if (name[i] != name1[j])
        {
            break;
        }
    }

    if (name[i] == name1[j])
    {
        cout << "Equal" << endl;
    }
    else if (name[i] < name1[j])
    {
        cout << "Smaller" << endl;
    }
    else
    {
        cout << "Grater" << endl;
    }

    return 0;
}
