#include <bits/stdc++.h>
void init(int &n)
{
    std::cin >> n;
}
void display(int arr[], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}
void back_Tracking(int j, int n, int arr[])
{
    for (int i = 0; i <= 1; ++i)
    {
        arr[j] = i;
        if (j == n)
        {
            display(arr, n);
        }
        else
        {
            back_Tracking(j + 1, n, arr);
        }
    }
}
int main()
{
    int n;
    init(n);
    int arr[100];
    back_Tracking(1, n, arr);
}