#include <bits/stdc++.h>
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    bool A[100];
    int n;
    
    cin >> n;

    for(int i = 1; i < n; i++)
        A[i] = true;

    for(int i = 2; i < sqrt(n); i++)
    {
        if (A[i] == true)
        {
            for (int j = i * i; j < n; j+= i)
            {
                A[j] = false;
            }
        }
    }
    
    for(int i = 2; i <n; i++)
    {
        if (A[i] == true)
        {
            cout << i << "\n";
        }
    }

    cout << endl;
    
    return 0;
}
    