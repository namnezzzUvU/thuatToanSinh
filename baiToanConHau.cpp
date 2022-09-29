#include <bits/stdc++.h>
#define fi for (int i = 1; i <= 300; ++i)
#define fj for (int j = 1; j <= n; ++j)
void init(int &n, bool nguoc[], bool xuoi[], bool doc[])
{
    std::cin >> n;
    fi
    {
        nguoc[i] = true;
        xuoi[i] = true;
        doc[i] = true;
    }
}
void display(int n, int arr[])
{
    fj
    {
        std::cout << arr[j];
    }
    std::cout<<std::endl;
}
void back_track(int i, int n, int arr[], bool doc[], bool xuoi[], bool nguoc[])
{
    fj
    {
        if (doc[j] && xuoi[i - j + n] && nguoc[i + j - 1])
        {
            arr[i] = j;
            doc[j] = false;
            xuoi[i - j + n] = false;
            nguoc[i + j - 1] = false;
            if (i == n)
            {
                display(n, arr);
            }
            else
            {
                back_track(i + 1, n, arr, doc, xuoi, nguoc);
            }
            doc[j] = true;
            xuoi[i-j+n] = true;
            nguoc[i+j-1] = true;
        }
    }
}
int main()
{
    bool nguoc[300], xuoi[300], doc[300];
    int arr[100];
    int n;
    init(n, nguoc, xuoi, doc);
    back_track(1, n, arr, doc, xuoi, nguoc);
}