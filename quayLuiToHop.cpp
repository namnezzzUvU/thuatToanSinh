#include <bits/stdc++.h>
void display(int k, int arr[])
{
    for (int i = 1; i <= k; ++i)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}
void init(int& n, int& k)
{
    std::cin >> n >> k;
}
void back_Tracking(int i, int n, int k, int arr[])
{
    for (int j = arr[i - 1] + 1; j <= n + k - i; ++j)
    {
        arr[i] = j;
        if (i == k)
        {
            display(k, arr);
        }
        else
        {
            back_Tracking(i + 1, n, k, arr);
        }
    }
}

int main()
{
    int n, k, arr[1000]={0};
    init(n, k);
    back_Tracking(1, n, k, arr);
}