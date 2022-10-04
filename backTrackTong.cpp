#include <bits/stdc++.h>
using namespace std;
int arr[100], n;
void display(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void genNext(int i, int k, int curSum)
{
    for (int j = 1; j <= k; ++j)
    {
        if (curSum <= n)
        {
            arr[i] = j;
            curSum += j;
            if (curSum == n)
            {
                display(i);
            }
            else
            {
                genNext(i + 1, j, curSum);
            }
            curSum -= j;
        }
    }
}
int main() {
    cin>>n;
    genNext(1,n,0);
}